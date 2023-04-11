-- Keep a log of any SQL queries you execute as you solve the mystery.

SELECT description
FROM crime_scene_reports
WHERE month = 7 AND day = 28
AND street = 'Chamberlin Street';

SELECT *
FROM courthouse_security_logs
WHERE hour = 10 AND minute = 15;