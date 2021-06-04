# Writing a filing co9mes in handy when analyzing data and later storing it


#initiating a for loop and storing it in a csv file
i = []
for a in range(0,10,2):
	#converting the numbers in the for loop into a list
	i = list()
	#storing the numbers in a csv file
	with open("loop.csv", 'w') as f:
		f.write(i)

