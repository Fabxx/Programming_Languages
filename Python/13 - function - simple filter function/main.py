"""Filter functions are naother type of anonymous function that takes a list and creates a new list based on the arguments """


numbers = [0,1,2,3,4,5,6]

even_numbers = list(filter(lambda x: (x%2 == 0), numbers))

print(even_numbers)
