def check_even_odd(num):
    if num % 2 == 0:
        return f"{num} is even"
    else:
        return f"{num} is odd"
try:
    number = int(input("Enter a number: "))
    print(check_even_odd(number))
except ValueError:
    print("Please enter a valid integer.")
