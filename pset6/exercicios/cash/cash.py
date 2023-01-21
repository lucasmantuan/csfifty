from cs50 import get_float

while True:
    cents = get_float("Change: ")
    if (cents > 0):
        break

cents = round(cents * 100)

count = 0

