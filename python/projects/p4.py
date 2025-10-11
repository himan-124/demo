#Conversion Categories: You must implement at least three of the following categories:
# Temperature (Celsius to Fahrenheit)
def celsius_to_fahrenheit(celsius):
    return (celsius * 9/5) + 32 # Example usage
# Length (kiloMeters to miles)
def kilometers_to_miles(km):
    return km * 0.621371
#weights (kg to pounds)
def kg_to_pounds(kg):
    return kg * 2.20462
celsius = float(input("Enter temperature in Celsius: "))
fahrenheit = celsius_to_fahrenheit(celsius)
print(f"{celsius}°C is {fahrenheit}°F")
km = float(input("Enter distance in kilometers: "))
miles = kilometers_to_miles(km)
print(f"{km} km is {miles} miles")
kg = float(input("Enter weight in kilograms: "))
pounds = kg_to_pounds(kg)
print(f"{kg} kg is {pounds} pounds")