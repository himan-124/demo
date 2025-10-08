#code to display calender of given month
import calendar
year= int(input("Enter year: "))
month= int(input("Enter month: "))
cal=calendar.month(year,month)
print(cal)