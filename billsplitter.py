#bill splitter using py
total = float(input("Enter total bill amount: "))
people = int(input("How many people? "))

if people == 0:
    print("Can't divide by zero.")
else:
    share = total / people
    print(f"Each person should pay: {share:.2f}")
