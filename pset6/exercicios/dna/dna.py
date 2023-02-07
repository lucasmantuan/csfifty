if len(sys.argv) != 3:
    sys.exit("python dna.py data.csv sequence.txt")

database = []
with open(sys.argv[1], "r") as file:
    reader = csv.DictReader(file)
    for row in reader:
        database.append(row)

