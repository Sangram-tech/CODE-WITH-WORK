def celsius_to_fahrenheit(celsius):
    return (celsius * 9/5) + 32

def fahrenheit_to_celsius(fahrenheit):
    return (fahrenheit - 32) * 5/9
temperature = float(input("Enter the temperature value: "))
unit = input("Enter the unit (C for Celsius, F for Fahrenheit): ")

if unit.upper() == 'C':
    converted = celsius_to_fahrenheit(temperature)
    print(f"{temperature}°C is {converted:.2f}°F")
elif unit.upper() == 'F':
    converted = fahrenheit_to_celsius(temperature)
    print(f"{temperature}°F is {converted:.2f}°C")
else:
    print("Invalid unit. Please enter 'C' for Celsius or 'F' for Fahrenheit.")
