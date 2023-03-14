import csv

title = input('Title: ').strip().upper()

with open('CS50 2019 - Lecture 7 - Favorite TV Shows (Responses).csv', 'r') as file:
    reader = csv.DictReader(file)

    counter = 0
    for row in reader:
        if row['title']