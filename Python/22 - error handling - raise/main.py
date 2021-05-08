""" The raise command manually raises an exception when a condition has been met """

try:
	#input a negative number and an error message will print
	z = (input("Enter a number:"))
	if z < 0:
		raise ValueError("This is not a positive number")

except ValueError as value:
	print(value)
