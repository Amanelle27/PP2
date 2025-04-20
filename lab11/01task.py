import psycopg2
import csv


conn = psycopg2.connect(
    host = "localhost",
    database = "phonebook_db",
    user = "postgres",
    password = "28293211"
)

cur = conn.cursor()

cur.execute("""
    CREATE TABLE IF NOT EXISTS phonebook(
        id SERIAL PRIMARY KEY,
        name VARCHAR(255) NOT NULL,
        telephone VARCHAR(20) NOT NULL)
""")

conn.commit()


def is_empty(table):
    cur.execute(f"""SELECT * FROM {table};""", (table, ))
    rows = cur.fetchall()
    if not rows:
        return True
    return False


def print_rows(table):
    cur.execute(f"""SELECT * FROM {table};""", (table, ))
    rows = cur.fetchall()
    for row in rows:
        print(row)


with open("upsert.sql", "r", encoding="utf-8") as f:
    #Creates procedure "upsert_contact" that 
    #creates a contact or updates if it exists
    sql = f.read()
cur.execute(sql)
conn.commit()


with open("upsertlist.sql", "r", encoding="utf-8") as f:
    #Creates procedure "insert_list" that 
    #creates a contacts or updates if it exists in uploaded list
    sql = f.read()
cur.execute(sql)
conn.commit()

with open("deletedata.sql", "r", encoding="utf-8") as f:
    #Creates procedure "delete_contact" that 
    #deletes a contact by its name or phone number
    sql = f.read()
cur.execute(sql)
conn.commit()


def upload_csv(filename):
    try:
        names = []
        phones = []

        with open(filename, "r") as csvfile:
            csvreader = csv.reader(csvfile, delimiter=',')
            _ = next(csvreader)

            next(csvreader)  # пропустить заголовок
            for _id, name, telephone in csvreader:
                names.append(name)
                phones.append(telephone)
        cur.execute("CALL insert_list(%s, %s);", (names, phones))
        conn.commit()
        if is_empty("invalid_contacts"):
            print("Everything was uploaded succesfully!")
        else:
            print("Incorrect data:")
            print_rows("invalid_contacts")
            print("Current table:")

    except (psycopg2.DatabaseError, Exception) as error:
        print(error)

def enter_manually():
    #id = int(input("New contact's ID: "))
    name = input("Enter a name for the contact: ")
    telephone = input("Enter the phone number: ")
    cur.execute("CALL upsert_contact(%s, %s);", (name, telephone))
    conn.commit()

def update_table():
    id = int(input("Enter id of a contact you want to change: "))
    print("What do you want to change? ")
    print("1. Contact's name")
    print("2. Contact's phone number")
    choice = int(input("Your choice: "))
    
    if choice == 1:
        new_name = input("Enter new name: ")
        cur.execute("""UPDATE phonebook
                    SET name = %s
                    WHERE id = %s""", (new_name, id))
        conn.commit()
    elif choice == 2:
        new_num = input("Enter new phone number: ")
        cur.execute("""UPDATE phonebook
                    SET telephone = %s
                    WHERE id = %s""", (new_num, id))
        
def query_data():
    print("How do you wanna filter your data?")
    print("1. By contact's name")
    print("2. By contact's phone number")
    choice = int(input("Your choice: "))
    if choice == 1:
        name = input("Enter needed name: ")
        cur.execute("""SELECT * FROM phonebook WHERE name = %s ;""",(name, ))
    elif choice == 2:
        num = input("Enter needed phone number: ")
        cur.execute("""SELECT * FROM phonebook WHERE name = %s ;""", (num, ))

    rows = cur.fetchall()

    for row in rows:
        print(row)


def delete_data():
    name = input("Enter name of a contact you want to delete: ")
    phone = input("Enter phone number of a contact you want to delete: ")
    cur.execute("CALL delete_contact(%s, %s);", (name, phone))
    conn.commit()

    
    

def print_phonebook_table():
    cur.execute("SELECT * FROM phonebook;")
    rows = cur.fetchall()
    headers = ["ID", "Name", "Telephone"]
    
    # Вычисляем максимальную ширину для каждой колонки (с учётом заголовков)
    col_widths = [len(header) for header in headers]
    for row in rows:
        col_widths[0] = max(col_widths[0], len(str(row[0])))
        col_widths[1] = max(col_widths[1], len(str(row[1])))
        col_widths[2] = max(col_widths[2], len(str(row[2])))

    # Формируем строку-разделитель
    divider = '+' + '+'.join(['-' * (w + 2) for w in col_widths]) + '+'
    
    # Формируем строку с заголовками
    header_row = '| ' + ' | '.join(f'{headers[i]:<{col_widths[i]}}' for i in range(len(headers))) + ' |'
    
    # Выводим таблицу
    print(divider)
    print(header_row)
    print(divider)
    
    for row in rows:
        row_str = '| ' + ' | '.join(f'{str(row[i]):<{col_widths[i]}}' for i in range(len(row))) + ' |'
        print(row_str)
    print(divider)



print("Choose what do you want to do with the table:")
print("1. Insert new data")
print("2. Filter data by name or phone number")
print("3. Delete contact")
command = int(input("Your choice: "))

if command == 1:
    print("Choose the method you want to insert data with:")
    print("1. By the CSV-file")
    print("2. By the console")
    choice = int(input("Your choice: "))

    if choice == 1:
        filename = input("Enter CSV-file name: ")
        upload_csv(filename)
        
    elif choice == 2:
        enter_manually()


elif command == 2:
    query_data()

elif command == 3:
    delete_data()


#print_phonebook_table()
print_rows('phonebook')

