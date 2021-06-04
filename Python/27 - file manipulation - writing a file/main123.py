import csv

f = open('abc.csv')
csv_f = csv.reader(f)

amails = []

for row in csv_f:
	amails.append(row[2])

print(amails)
