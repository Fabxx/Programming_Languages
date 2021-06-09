#Appedning a file 

#creating the file
filename = "example.txt"

#Opening the file
file = open(filename, 'a')

#Inputing 3 names and then storing them in a file
for i in range(0,3):
	name = input("Enter a name: ")
	file.write(name + "\n")
#closing the file
file.close()
