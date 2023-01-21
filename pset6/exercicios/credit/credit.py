from cs50 import get_int

while True:
    card = get_int("Card: ")
    if card > 0:
        break

def luhnChecksum(card):
    def digitsOf(n):
        return [int(d) for d in str(n)]
    digits = digitsOf(card)
    odd_digits = digits[-1::-2]
    even_digits = digits[-2::-2]
    checksum = 0
    checksum += sum(odd_digits)
    for d in even_digits:
        checksum += sum(digitsOf(d * 2))
    return checksum % 10

length = 0
visa = card
master = card
amex = card

length = len(str(card))

while visa >= 10:
    visa = int(visa / 10)

while amex >= 10 ** 13:
    amex = int(amex / 10 ** 13)

while master >= 10 ** 14:
    master = int(master / 10 ** 14)

if luhnChecksum(card) == 0:
    if visa == 0 and (length == 13 or length == 16):
        print("VISA")
    elif length == 15 and (amex == 34 or amex == 37):
        print("AMEX")
    elif length == 16 and (51 <= master <= 55):
        print("MASTERCARD")
    else:
        print("INVALID")
else:
    print("INVALID")