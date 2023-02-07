from csv import reader, DictReader
from sys import argv, exit

def main():
    if len(argv) != 3:
        print("Usage: python dna.py data.csv sequence.txt")
        exit(1)

    db_path = argv[1]
    seq_path = argv[2]

    with open(db_path, "r") as csv_file:
        reader = DictReader(csv_file)
        dict_list = list(reader)

    with open(seq_path, "r") as file:
        sequence = file.read()

    max_counts = []
    for i in range(1, len(reader.fieldnames)):
        str = reader.fieldnames[i]
        max_counts.append(0)

        for j in range(len(sequence)):
            str_count = 0

            if sequence[j:(j + len(str))] == str:
                k = 0
                while sequence[(j + k):(j + k + len(str))] == str:
                    str_count += 1
                    k += len(str)

                if str_count > max_counts[i - 1]:
                    max_counts[i - 1] = str_count

    for i in range(len(dict_list)):
        matches = 0
        for j in range(1, len(reader.fieldnames)):
            if int(max_counts[j - 1]) == int(dict_list[i]  [reader.fieldnames[j]]):
                matches += 1
            if matches == (len(reader.fieldnames) - 1):
                print(dict_list[i]['name'])
                exit(0)

    print("No match")

main()