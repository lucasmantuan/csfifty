import csv
from cs50 import SQL
open("shows.db", "w").close()
db = SQL("sqlite:///shows.db")
db.execute("CREATE TABLE shows (id INTEGER, title TEXT, PRIMARY KEY(id))")
db.execute("CREATE TABLE genres (show_id INTEGER, genre TEXT, FOREIGNKEY(show_id) REFERENCES shows(id))")

with open("CS50 2019 - Lecture 7 - Favorite TV Shows (Responses).csv", "r") as file:
    reader = csv.DictReader(file)
    for row in reader:
        title = row["title"].strip().upper()
        id = db.execute("INSERT INTO shows (title) VALUES(?)", title)
        for genre in row["genres"].split(", "):
            db.execute("INSERT INTO genres (show_id, genre) VALUES(?, ?)", id,genre)