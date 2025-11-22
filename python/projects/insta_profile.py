#Instagram profile layout Program
# Author: Himanshu 
import random

# Function to make a 6-digit OTP
def o_tp():
    otp = ""
    for i in range(6):
        otp += str(random.randint(0, 9))
    return otp

print("=== Create Your Instagram Profile ===")
name = input("Enter your name: ")
username = input("Choose a username: ")
email = input("Enter your email: ")
phone = input("Enter your phone number: ")
pin = input("Set a 4-digit PIN: ")

print("\nProfile created successfully!")
print("Name:", name)
print("Username:", username)
print("Email:", email)
print("Phone:", phone)

# Login process
print("\n=== Login ===")
otp = o_tp()
print("Your OTP is:", otp)

enter_otp = input("Enter OTP: ")
if enter_otp != otp:
    print("Wrong OTP! Access denied.")
else:
    user_pin = input("Enter your PIN: ")
    if user_pin != pin:
        print("Wrong PIN! Access denied.")
    else:
        print("Login successful!")