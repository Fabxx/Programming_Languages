"""  Dictionaries are a data type that stores a key and a value """


#An example of what a dictionary looks like
#First value is the key and the second value is the value
a = {"make": "toyota", "model":"rav4"}

print(a)

#printing the keys in the dictionary
print(a.keys())

#printing the values in the dictionary
print(a.values())

#adding a item in a dictionary
a["year"] = 2005
print(a)


#Changing a value in  dictionary
a["year"] = 2009

#printing the items in the dictionary
print(a.items())


#removing an item in a dictionary
#popitem() removes the last item in the dictionary
a.popitem()
print(a)

#Clearing the dictionary
a.clear()
print(a)


