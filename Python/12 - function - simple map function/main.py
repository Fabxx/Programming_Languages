""" Map functions is another anonymous function that takes
a list and function   """


numbers = [0,1,2,3,4]

cubed = map(lambda x: x * 3, numbers)

print(list(cubed))
