# Age calculator – simple one

birth_year = int(input("Enter your birth year: "))
current_year = int(input("Enter current year: "))

age = current_year - birth_year

if age < 0:
    print("Invalid input. Please enter the year correctly.")
else:
    print(f"You are {age} years old.")
