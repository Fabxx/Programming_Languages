"""Break statements will end a loop once a condition has been met.  """


def fizzbuzz():
        for x in range(1,25):
                if x % 3 == 0 and x % 5 == 0:
                        print("fizzbuzz")
			#Once it reaches 15 the loop will end prematurely
                        break
                elif x % 3 == 0:
                        print("fizz")
                elif x % 5 == 0:
                        print("buzz")
		else:
			print(x)
        print("The loop has ended")


fizzbuzz()
