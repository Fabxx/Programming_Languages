""" No matter what happens to the code whatever is inside of the finally command will run """


try:
	print("The program is running")

except:
	print("there is an error")

else:
	print("the program ran successfully")

finally:
	print("now on to the next program")
