#Class is the data structure for object oriented programming
class Car:
	def __init__(self,make,model,year):
		self.make = make
		self.model = model
		self.year = year

#Methods are functions within a class
	def color(self, color):
		return f'My {self.make} {self.model} is ' + color

b = Car("Honda", "Civic", "2007")
#Printing the method
print(b.color("Blue"))


