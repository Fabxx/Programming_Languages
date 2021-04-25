def totalAmt(price, tip):
    return price + tip

def tipAmt(price):
    return price * 0.18

price = input("How much was your dinner bill?\n")

# you can call a function to retrieve a value
tip = tipAmt(price)
print("Then you should tip at least $" + str(tip))

total = totalAmt(price, tip)
print("This will be a grand total of $" + str(total)) 