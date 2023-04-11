-- Keep a log of any SQL queries you execute as you solve the mystery.

SELECT description FROM crime_scene_reports
WHERE month = 7 AND day = 28 AND street = 'Chamberlin Street';

SELECT transcript FROM interviews
WHERE hour = 10 AND minute = 15;

SELECT *
FROM people
WHERE license_plate = '11J91FW';