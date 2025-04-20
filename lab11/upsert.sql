CREATE OR REPLACE PROCEDURE upsert_contact(
    new_name    VARCHAR,
    new_phone   VARCHAR
)
LANGUAGE plpgsql
AS $$
BEGIN
    IF EXISTS (SELECT 1 FROM phonebook WHERE name = new_name) THEN
        UPDATE phonebook
            SET telephone = new_phone
        WHERE name = new_name;
    ELSE 
        INSERT INTO phonebook(name, telephone)
            VALUES (new_name, new_phone);
    END IF;
END;
$$;
