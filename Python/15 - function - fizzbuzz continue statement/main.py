"""Continue statement  """


def fizzbuzz():
	for x in range(1,25):
		if x % 3 == 0 and x % 5 == 0:
			print("fizzbuzz")
			#Once it reaches 15 the loop  will continue
			continue
		elif x % 3 == 0:
			print("fizz")
			continue
		elif x % 5 == 0:
			print("buzz")
			continue
		else:
			print(x)
	print("The loop has ended")

fizzbuzz()
