-- Keep a log of any SQL queries you execute as you solve the mystery.

-- SELECT description
-- FROM crime_scene_reports
-- WHERE month = 7 AND day = 28
-- AND street = 'Chamberlin Street';

-- SELECT transcript
-- FROM interviews
-- WHERE month = 7 AND day = 28
-- AND transcript LIKE '%courthouse%';

-- SELECT courthouse_security_logs.activity, courthouse_security_logs.license_plate, people.name
-- FROM people
-- JOIN courthouse_security_logs ON courthouse_security_logs.license_plate = people.license_plate
-- WHERE courthouse_security_logs.month = 7
-- AND courthouse_security_logs.day = 28
-- AND courthouse_security_logs.hour = 10
-- AND courthouse_security_logs.minute >= 15
-- AND courthouse_security_logs.minute <= 25;

-- SELECT people.name, atm_transactions.transaction_type
-- FROM people
-- JOIN bank_accounts ON bank_accounts.person_id = people.id
-- JOIN atm_transactions ON atm_transactions.account_number = bank_accounts.account_number
-- WHERE atm_transactions.month = 7
-- AND atm_transactions.day = 28
-- AND atm_transactions.atm_location = 'Fifer Street'
-- AND atm_transactions.transaction_type = 'withdraw';

-- SELECT caller, caller_name, receiver, receiver_name
-- FROM phone_calls
-- WHERE month = 7 AND day = 28 AND duration < 60;

-- ALTER TABLE phone_calls
-- ADD caller_name text;

-- ALTER TABLE phone_calls
-- ADD receiver_name text;

-- UPDATE phone_calls
-- SET caller_name = people.name
-- FROM people
-- WHERE phone_calls.caller = people.phone_number;

-- UPDATE phone_calls
-- SET receiver_name = people.name
-- FROM people
-- WHERE phone_calls.receiver = people.phone_number;

-- SELECT id, hour, minute, origin_airport_id, destination_airport_id
-- FROM flights
-- WHERE month = 7 AND day = 29
-- ORDER BY hour ASC
-- LIMIT 1;

-- UPDATE flights
-- SET origin_airport_id = airports.city
-- FROM airports
-- WHERE flights.origin_airport_id = airports.id;

-- UPDATE flights
-- SET destination_airport_id = airports.city
-- FROM airports
-- WHERE flights.destination_airport_id = airports.id;

-- SELECT flights.destination_airport_id, name, phone_number, license_plate
-- FROM people
-- JOIN passengers ON people.passport_number = passengers.passport_number
-- JOIN flights ON flights.id = passengers.flight_id
-- WHERE flights.id = 36
-- ORDER BY flights.hour ASC;

SELECT name FROM people
JOIN passengers ON people.passport_number = passengers.passport_number
JOIN flights ON flights.id = passengers.flight_id
WHERE (flights.month = 7 AND flights.day = 29 AND flights.id = 36)
AND name IN
(SELECT people.name
FROM phone_calls
WHERE month = 7 AND day = 28 AND duration < 60)
AND name IN
(SELECT people.name
FROM people
JOIN bank_accounts ON bank_accounts.person_id = people.id
JOIN atm_transactions ON atm_transactions.account_number = bank_accounts.account_number
WHERE atm_transactions.month = 7
AND atm_transactions.day = 28
AND atm_transactions.atm_location = 'Fifer Street'
AND atm_transactions.transaction_type = 'withdraw')
AND name IN
(JOIN courthouse_security_logs ON courthouse_security_logs.license_plate = people.license_plate
WHERE courthouse_security_logs.month = 7
AND courthouse_security_logs.day = 28
AND courthouse_security_logs.hour = 10
AND courthouse_security_logs.minute >= 15
AND courthouse_security_logs.minute <= 25);