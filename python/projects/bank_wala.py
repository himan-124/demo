# SBI ATM Simulation Program
# Author: Himanshu 
import random
import datetime
def generate_pass():
    password = ""
    for _ in range(6):
        password += str(random.randint(0, 9))
    return password
def atm():
    print("===== Welcome to SBI ATM =====")
    otp = generate_pass()
    print("Your one-time password (OTP) is:", otp)
    entered_otp = input("Enter the OTP to continue: ")
    if entered_otp != otp:
        print("Invalid OTP! Access denied.")
        return
    print("OTP verified ")
    pin = "1234"          
    balance = 10000      
    history = []         
    user_pin = input("Enter your PIN: ")
    
    if user_pin != pin:
        print("Wrong PIN! Access denied.")
        return
    print("Login successful ")

    while True:
        print("\n1. Check Balance")
        print("2. Deposit Money")
        print("3. Withdraw Money")
        print("4. Mini Statement")
        print("5. Exit")

        choice = input("Choose option (1-5): ")

        if choice == "1":
            print("Balance: ₹", balance)

        elif choice == "2":
            amount = int(input("Enter deposit amount: ₹"))
            balance += amount
            history.append(f"{datetime.datetime.now()} - Deposit ₹{amount}, Balance ₹{balance}")
            print("Deposit successful. Balance: ₹", balance)

        elif choice == "3":
            amount = int(input("Enter withdraw amount: ₹"))
            if amount <= balance:
                balance -= amount
                history.append(f"{datetime.datetime.now()} - Withdraw ₹{amount}, Balance ₹{balance}")
                print("Withdraw successful. Balance: ₹", balance)
            else:
                print("Not enough balance!")

        elif choice == "4":
            print("\n===== Mini Statement =====")
            if history:
                for txn in history[-5:]:
                    print(txn)
            else:
                print("No transactions yet.")
            print("==========================")

        elif choice == "5":
            print("Thank you for using SBI ATM.")
            break

        else:
            print("Invalid choice!")


atm()