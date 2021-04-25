""" Map functions is another anonymous function that takes
a list and function   """


number = [0,1,2,3,4]

cubed = list(map(lambda x: x * 3), number)

print(cubed)
