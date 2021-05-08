""" Error handling is a concept where programmers can customize error messages.
In python try except is commonly used for error handling"""

#try statement runs the code
try:
	#type a word 
	print(input("Enter a number:"))

#except statement catches detects the error and this is where you can customize the error message
except:
	print("The input is not a number")
