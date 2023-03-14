import csv

titles = {}

def f(title):
    return titles[title]


with open('CS50 2019 - Lecture 7 - Favorite TV Shows (Responses).csv', 'r') as file:
    reader = csv.DictReader(file)

    for row in reader:
        title = row['title'].strip().upper()
        if title not in titles:
            titles[title] = 0
            titles[title] += 1

    for title in sorted(titles, key=f, reverse=True):
        print(title, titles[title])