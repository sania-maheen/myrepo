#Simple Calendar Display (One Month)
#Let user enter month & year → Show days in that month

import calendar
year = int(input("Enter year: "))
month = int(input("Enter month (1-12): "))

print("\n", calendar.month(year, month))
