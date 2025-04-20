CREATE OR REPLACE PROCEDURE delete_contact(
  given_name TEXT,
  given_phone TEXT
)
LANGUAGE plpgsql
AS $$
BEGIN
  DELETE FROM phonebook
   WHERE (given_name IS NOT NULL AND name = given_name)
      OR (given_phone IS NOT NULL AND telephone = given_phone);
END;
$$;
