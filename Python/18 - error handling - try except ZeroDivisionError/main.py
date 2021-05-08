""" There are many forms of errors in python. ZeroDivisionError is a type of error where a number is divided by 0 which is not possible"""


try:

	print(input("Enter the number zero:", zero))
	
	#dividing a number by zero
	1/zero
#when error occurs the except will print a customize message
except:
	print("Cannot divide a number by zero")
	
