from cs50 import get_int

while True:
    card = get_int("Card: ")
    if card > 0:
        break

def luhnChecksum(card):
    def digitsOf(n):
        return [int(d) for d in str(n)]
    