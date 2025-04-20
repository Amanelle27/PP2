CREATE TABLE IF NOT EXISTS invalid_contacts (
  name       VARCHAR,
  telephone  VARCHAR,
  error TEXT
);




CREATE OR REPLACE PROCEDURE insert_list(
    new_names  TEXT[],
    new_phones TEXT[]
)
LANGUAGE plpgsql
AS $$
DECLARE 
    i INT;
BEGIN
    TRUNCATE TABLE invalid_contacts;

    FOR i IN 1..array_length(new_names,1) LOOP
        IF new_phones[i] ~ '^\+7\s\d{3}\s\d{3}\s\d{4}$' THEN
            CALL upsert_contact(new_names[i], new_phones[i]);
        
        ELSE 
            INSERT INTO invalid_contacts(name, telephone, error)
            VALUES (new_names[i], new_phones[i], 'Invalid phone number format');
        END IF;
    END LOOP;
END;
$$;