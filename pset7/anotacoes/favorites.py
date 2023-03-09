import csv

with open('CS50 2019 - Lecture 7 - Favorite TV Shows (Responses).csv', 'r') as file:
    reader = csv.DictReader(file)
    for row in reader:
        print(row['title'])