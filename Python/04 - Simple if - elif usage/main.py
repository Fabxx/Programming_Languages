                                     
  #Showing a simple usgae about the elif statement

a = int(input("enter the first number: "))
b = int(input("enter the second number: "))

sum = a + b

if(sum < 0 ):
        print("The sum is below 0", sum)
elif(sum > 0 and sum < 40):
        print("The sum is positive but below 40 ", sum)
else:
        print("The sum is above 40")
