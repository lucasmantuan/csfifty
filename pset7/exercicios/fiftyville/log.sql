-- Keep a log of any SQL queries you execute as you solve the mystery.

SELECT description
FROM crime_scene_reports
WHERE month = 7 AND day = 28
AND street = 'Chamberlin Street';

SELECT transcript
FROM interviews
WHERE month = 7 AND day = 28
AND transcript LIKE '%courthouse%';

SELECT courthouse_security_logs.activity, courthouse_security_logs.license_plate, people.name
FROM people
JOIN courthouse_security_logs ON courthouse_security_logs.license_plate = people.license_plate
WHERE courthouse_security_logs.month = 7
AND courthouse_security_logs.day = 28
AND courthouse_security_logs.hour = 10
AND courthouse_security_logs.minute >= 15
AND courthouse_security_logs.minute <= 25;

SELECT people.name, atm_transactions.transaction_type
FROM people
JOIN B