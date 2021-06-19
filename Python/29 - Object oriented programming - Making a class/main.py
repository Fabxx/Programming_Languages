#Object oriented programming in python is a great way to reuse code

#Class is the data structure for object oriented programming
class Car:
	def __init__(self,make,model,year):
		self.make = make
		self.model = model
		self.year = year


#__init__ initiates the class.
# Car is the class attributes that defines the class
#make, model, and year are instance attributes that assign a value once the class has been called

#To print the make of the car
a = Car("Honda", "Civic", 1975)
print(a.make)
