# Writing a filing comes in handy when analyzing data and later storing it

#Creating the file
filename = "example.txt"

#Opening the file
file = open(filename, 'w')

#Storing numbers 1-10 in the file
for i in range(1,11):
	file.write("This is line %i.\n" % i)

#Closing the file
file.close()
