# Fun ATM Simulation Program
# Author: Himanshu

import random
import datetime

def generate_pass():
    password = ""
    for _ in range(6):
        password += str(random.randint(0, 9))
    return password

def atm():
    print("===== Welcome to ATM =====")

    # Step 1: Select Bank Name
    print("\nSelect your Bank:")
    print("1. SBI")
    print("2. HDFC")
    print("3. Kotak")
    print("4. Allahabad")
    bank_choice = input("Enter choice (1-4): ")

    banks = {"1": "SBI", "2": "HDFC", "3": "Kotak", "4": "Allahabad"}
    if bank_choice not in banks:
        print("Invalid bank choice! Exiting...")
        return
    bank_name = banks[bank_choice]
    print(f"You selected: {bank_name} Bank\n\n\n\t\t\tNow you entered in {bank_name} Bank\n\n ")

    # OTP verification
    otp = generate_pass()
    print("Your one-time password (OTP) is:", otp)
    entered_otp = input("Enter the OTP to continue: ")
    if entered_otp != otp:
        print("Invalid OTP! Access denied.")
        return
    print("OTP verified ✅")

    # User account details
    pin = "1234"
    balance = 10000
    account_number = "590740012345"
    holder_name = "Himanshu"
    history = []
    minimum_balance = 500   # Bank requires at least ₹500 to remain

    user_pin = input("Enter your PIN: ")
    if user_pin != pin:
        print("Wrong PIN! Access denied.")
        return
    print("Login successful ✅")

    while True:
        print("\n===== MENU =====")
        print("1. Check Balance")
        print("2. Account Enquiry")
        print("3. Withdraw Money")
        print("4. Deposit Money")
        print("5. Cheque Enquiry")
        print("6. Others")
        print("7. Exit")

        choice = input("Choose option (1-7): ")

        if choice == "1":
            print("Balance: ₹", balance)

        elif choice == "2":
            print("\n===== Account Enquiry =====")
            print("Bank Name:", bank_name)
            print("Account Holder:", holder_name)
            print("Account Number:", account_number)
            print("Balance: ₹", balance)
            print("===========================")

        elif choice == "3":
            if balance == 0:
                print("⚠️ Your balance is ₹0. You cannot withdraw money.")
            else:
                branch = input("Enter your Branch Name: ")
                amount = int(input("Enter withdraw amount: ₹"))
                # Check minimum balance rule
                if balance - amount < minimum_balance:
                    print(f"⚠️ Withdrawal denied! You must keep at least ₹{minimum_balance} in your account.")
                elif amount <= balance:
                    balance -= amount
                    history.append(f"{datetime.datetime.now()} - Withdraw ₹{amount} from {branch} branch, Balance ₹{balance}")
                    print("Withdraw successful. Balance: ₹", balance)
                else:
                    print("Not enough balance!")

        elif choice == "4":
            amount = int(input("Enter deposit amount: ₹"))
            balance += amount
            history.append(f"{datetime.datetime.now()} - Deposit ₹{amount}, Balance ₹{balance}")
            print("Deposit successful. Balance: ₹", balance)

        elif choice == "5":
            branch = input("Enter your Branch Name for Cheque Enquiry: ")
            print("\n===== Cheque Enquiry =====")
            if history:
                for txn in history[-5:]:
                    print(txn)
            else:
                print("No transactions yet.")
            print(f"Branch: {branch}")
            print("==========================")

        elif choice == "6":
            # Fun random responses
            funny_responses = [
                "😂 Invalid Input!",
                "🍴 Lunch Time! Please come later.",
                "🤣 Joke: Why don't banks ever play hide and seek? Because good luck hiding your balance!",
                "😜 Joke: ATM said to the user — 'I'm tired of giving cash, can I get a holiday?'"
            ]
            print(random.choice(funny_responses))

        elif choice == "7":
            print("Thank you for using", bank_name, "ATM.")
            break

        else:
            print("Invalid choice!")

atm()