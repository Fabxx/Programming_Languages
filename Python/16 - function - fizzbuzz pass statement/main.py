"""Pass statement is a placeholder that does nothing and continues with the loop.   """


def fizzbuzz():
        for x in range(1,25):
                if x % 3 == 0 and x % 5 == 0:
         		pass
			print("This is 15")
                elif x % 3 == 0:
                        print("fizz")
                elif x % 5 == 0:
                        print("buzz")
		else:
			print(x)
	print("The loop has ended")


fizzbuzz()

