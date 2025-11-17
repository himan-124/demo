# RAM RAM BHAI SABHI KO , AAJ HUM BNA RHE HAI
# HOTEL MANAGEMENT PROGRAM

import random

# GLOBAL LIST DECLARATION
name = []
phno = []
add = []
room = []
price = [] # Stores total room price (Daily Price * Days)
rc = [] # Restaurant Cost
p = [] # Payment Status (0=Pending, 1=Paid)
roomno = []
custid = []
day = [] # Stayed Days

# GLOBAL VARIABLE
i = 0 # Counter for number of bookings

# HOME FUNCTION (Controls the main loop)
def Home():
    global i
    while True: # Main loop runs until user exits (ch == 0)
        print("\n" + "="*50)
        print("\t\t\t\tWELCOME TO GRAND VILLAS")
        print("="*50 + "\n")
        
        print("""
    \t\t\t1. For Booking
    \t\t\t2. For Rooms Information
    \t\t\t3. For Cafe Menu & Order
    \t\t\t4. For Payment
    \t\t\t5. Check Record
    \t\t\t0. For Exit\n""")

        try:
            ch = int(input("-> "))
        except ValueError:
            print("\t\t\tINVALID INPUT. PLEASE ENTER A NUMBER (0-5).")
            continue 

        if ch == 1:
            print(" ")
            Booking()
        elif ch == 2:
            print(" ")
            Rooms_Info()
        elif ch == 3:
            print(" ")
            Restaurant()
        elif ch == 4:
            print(" ")
            Payment()
        elif ch == 5:
            print(" ")
            Record()
        elif ch == 0:
            print("\nTHANK YOU FOR VISITING GRAND VILLAS. GOODBYE!")
            break 
        else:
            print("\t\t\tWRONG CHOICE. PLEASE SELECT AN OPTION FROM 0 to 5.")


# BOOKING FUNCTION
def Booking():
    global i
    print("\n--- BOOKING ROOMS ---")

    while True:
        n = str(input("NAME: "))
        p1 = str(input("PHONE NUMBER: "))
        a = str(input("ADDRESS: "))

        if n and p1 and a:
            
            # Check for existing phone number with pending payment
            pending_found = False
            for idx in range(0, i):
                if p1 == phno[idx] and p[idx] == 0:
                    print("CUSTOMER'S PHONE NUMBER ALREADY EXISTS AND PAYMENT IS PENDING! Please clear payment first.")
                    pending_found = True
                    break
            
            if pending_found:
                return # Return to Home() if payment is pending
            
            # If valid new customer or paid previous customer, append data
            name.append(n)
            phno.append(p1)
            add.append(a)
            break
        else:
            print("\tNAME, PHONE NUMBER, AND ADDRESS CAN NOT BE EMPTY!!!\nPLEASE FILL ALL COLUMNS PROPERLY\n")

    print("""\n------------SELECT ROOM TYPE------------
        1. NON-AC NORMAL(2 PEOPLE) – ₹3500/day
        2. NON-AC STANDARD(4 PEOPLE) – ₹4500/day
        3. AC NORMAL(2 PEOPLE) – ₹6500/day
        4. AC STANDARD(4 PEOPLE) – ₹7500/day
        5. KING STAY – ₹25000/day
        6. QUEEN STAY – ₹27000/day
        \t\tPRESS 0 TO KNOW ABOUT ROOM PRICES\n""")

    # Function to handle error rollback if booking fails mid-way
    def rollback():
        if name: name.pop()
        if phno: phno.pop()
        if add: add.pop()
        if room: room.pop()
        if price: price.pop()
        if day: day.pop()

    try:
        ch = int(input("-> "))
    except ValueError:
        print("INVALID INPUT. Returning to Home Menu.")
        rollback()
        return

    # Handle the '0' option for prices
    if ch == 0:
        print("""\nYOU HAVE TO PRESS NUMBERS FOR YOUR CHOICE
        1. NON-AC NORMAL(2 PEOPLE) -----3500inr per day
        2. NON-AC STANDARD(4 PEOPLE) -----4500inr per day
        3. AC NORMAL(2 PEOPLE) -----6500inr per day
        4. AC STANDARD(4 PEOPLE) -----7500inr per day
        5. KING STAY -----25000inr per day
        6. QUEEN STAY -----27000inr per day\n""")
        
        try:
            ch = int(input("-> "))
        except ValueError:
            print("INVALID INPUT. Returning to Home Menu.")
            rollback()
            return
    
    # Check if a valid room choice was made (1-6)
    if ch not in range(1, 7):
        print("WRONG CHOICE...!!! Returning to Home Menu.\n")
        rollback()
        return

    # Assign room type and daily price based on choice (ch)
    room_map = {
        1: ('NON-AC NORMAL(2 PEOPLE)', 3500),
        2: ('NON-AC STANDARD(4 PEOPLE)', 4500),
        3: ('AC NORMAL(2 PEOPLE)', 6500),
        4: ('AC STANDARD(4 PEOPLE)', 7500),
        5: ('KING STAY', 25000),
        6: ('QUEEN STAY', 27000)
    }
    
    room_type, daily_price = room_map[ch]
    room.append(room_type)
    price.append(daily_price) # price at this point is the DAILY price

    # Stay Days
    try:
        days = int(input("ENTER NUMBER OF STAYED DAYS: "))
        if days <= 0:
            raise ValueError
        day.append(days)
        total_room_cost = price[-1] * days
        price[-1] = total_room_cost # price now holds the TOTAL room cost
    except ValueError:
        print("INVALID NUMBER OF DAYS. Booking cancelled. Returning to Home Menu.")
        rollback()
        return


    # Generate Unique Room Number and Customer ID
    rn = random.randrange(40) + 300
    cid = random.randrange(40) + 10

    # Ensure uniqueness
    while rn in roomno:
        rn = random.randrange(60) + 300
    
    while cid in custid:
        cid = random.randrange(60) + 10

    rc.append(0) # Initial restaurant cost
    p.append(0) # Initial payment status (Pending)

    print("\n*** ROOM IS BOOKED SUCCESSFULLY ***")
    print("ALLOTTED ROOM NUMBER:", rn)
    print("CUSTOMER ID:", cid)

    roomno.append(rn)
    custid.append(cid)
    i = i + 1 # Increment booking counter

    input("\nPress ENTER to return to the Home Menu...")
    return


# ROOMS INFORMATION FUNCTION
def Rooms_Info():
    print("""\n--- Room Specifications & Facilities ---\n
\t\t\t1. NON-AC NORMAL (2 People) – ₹3500/day
- Occupancy: 2 adults
- Air Conditioning: Not available
- Bed Type: Double bed
- Wi-Fi: Free basic internet
- TV: 24-inch LED with local channels
- Bathroom: Attached with basic amenities
- Room Service: Limited hours
- Extras: Drinking water, basic toiletries

\t\t\t2. NON-AC STANDARD (4 People) – ₹4500/day
- Occupancy: Up to 4 adults
- Air Conditioning: Not available
- Bed Type: 2 double beds or 1 double + 2 singles
- Wi-Fi: Free basic internet
- TV: 32-inch LED
- Bathroom: Spacious with hot/cold water
- Room Service: Available
- Extras: Complimentary toiletries, extra towels
\t\t\t3. AC NORMAL (2 People) – ₹6500/day
- Occupancy: 2 adults
- Air Conditioning: Split AC
- Bed Type: Queen-size bed
- Wi-Fi: Free high-speed internet
- TV: 32-inch Smart TV
- Bathroom: Modern with shower
- Room Service: 24/7
- Extras: Tea/coffee maker, toiletries, bottled water

\t\t\t4. AC STANDARD (4 People) – ₹7500/day
- Occupancy: Up to 4 adults
- Air Conditioning: Split AC
- Bed Type: 2 queen-size beds
- Wi-Fi: Free high-speed internet
- TV: 40-inch Smart TV
- Bathroom: Spacious with rain shower
- Room Service: 24/7
- Extras: Mini fridge, toiletries, breakfast included

\t\t\t5. KING STAY – ₹25,000/day
- Occupancy: 2 adults + 2 children or 3 adults(GUEST'S ALLOWED)
- Air Conditioning: Centralized
- Bed Type: King-size luxury bed
- Wi-Fi: Premium high-speed internet
- TV: 55-inch Smart TV
- Bathroom: Luxury bath with jacuzzi
- Room Service: 24/7 personalized service
- Extras: Living room, dining area, minibar, bathrobe, slippers, welcome drink, breakfast buffet

\t\t\t6. QUEEN STAY – ₹27,000/day
- Occupancy: 2 adults
- Air Conditioning: Centralized
- Bed Type: Queen-size luxury bed
- Wi-Fi: Premium high-speed internet
- TV: 50-inch Smart TV
- Bathroom: Designer bath with soaking tub
- Room Service: 24/7 personalized service
- Extras: Private balcony, lounge area, minibar, premium toiletries, breakfast buffet, evening snacks

PLEASE LET US KNOW IF YOU WANT EXTRA MORE SERVICES .....-----
BUT FOR EVERY EXTRA SERVICES CHARGES WILL BE APPLIED
\n\n""")
    input("Press ENTER to return to the Home Menu...")
    return

# RESTAURANT FUNCTION
def Restaurant():
    global i
    
    try:
        cid = int(input("ENTER CUSTOMER ID: "))
    except ValueError:
        print("INVALID INPUT. Customer ID must be a number.")
        return

    # Find the customer index 'n'
    try:
        n = custid.index(cid)
    except ValueError:
        print("❌ INVALID CUSTOMER ID!")
        return
    
    if p[n] == 1:
        print("Customer has already paid the total bill. Cannot add more restaurant charges.")
        return
    
    # Customer found and payment is pending
    print(f"\n✅ Customer Found: {name[n]}")
    print("""\n\t\t\t🍽️ THE GRAND VILAS MENU \n
🥞 BREAKFAST
1. Poha – ₹60
2. Masala Dosa – ₹120
3. Idli Sambar (2 pcs) – ₹100
4. Aloo Paratha with Curd – ₹130
5. Veg Sandwich – ₹100
6. Omelette (2 eggs) – ₹90
7. Tea / Coffee – ₹40
8. Fresh Juice (Orange/Mango) – ₹120

🍛 MAIN COURSE (LUNCH/DINNER)
9. Paneer Butter Masala – ₹320
10. Dal Tadka – ₹180
11. Veg Biryani – ₹280
12. Chicken Curry – ₹350
13. Mutton Rogan Josh – ₹450
14. Tandoori Roti (per piece) – ₹30
15. Steamed Rice – ₹120
16. Mixed Veg Curry – ₹220

🍔 FAST FOOD
17. Veg Burger – ₹100
18. Cheese Pizza (Regular) – ₹180
19. French Fries – ₹90
20. Chicken Nuggets (6 pcs) – ₹190
21. Momos (Veg/Chicken/Paneer) – ₹180
22. Maggi (Masala) – ₹80

🍰 DESSERTS
23. Gulab Jamun (2 pcs) – ₹80
24. Rasmalai (2 pcs) – ₹120
25. Ice Cream (Vanilla/Choco) – ₹90
26. Brownie with Ice Cream – ₹280
27. Fruit Custard – ₹140
28. Kheer – ₹120

🥤 DRINKS
29. Mineral Water (1L) – ₹45
30. Soft Drinks (Coke/Sprite-500ml) – ₹80
31. Fresh Lime Soda – ₹70
32. Cold Coffee – ₹140
33. Lassi (Sweet) – ₹150
34. Mocktail (Fruit Mix) – ₹180

🧾 OTHERS
35. Papad (Roasted/Fried) – ₹40
36. Green Salad – ₹160
37. Pickle (Mixed) – ₹30
38. Curd – ₹50
39. Butter – ₹50
40. Buttermilk - ₹80 
(Press 0 to finish ordering)
""")
    
    current_order_cost = 0
    menu_prices = {
        1: 60, 2: 120, 3: 100, 4: 130, 5: 100, 6: 90, 7: 40, 8: 120, 9: 320,
        10: 180, 11: 280, 12: 350, 13: 450, 14: 30, 15: 120, 16: 220, 17: 100,
        18: 180, 19: 90, 20: 190, 21: 180, 22: 80, 23: 80, 24: 120, 25: 90,
        26: 280, 27: 140, 28: 120, 29: 45, 30: 80, 31: 70, 32: 140, 33: 150,
        34: 180, 35: 40, 36: 160, 37: 30, 38: 50, 39: 50, 40: 80
    }
    
    while True:
        try:
            ch = int(input("Enter Item Number -> "))
        except ValueError:
            print("INVALID INPUT. Please enter a number.")
            continue

        if ch in menu_prices:
            current_order_cost += menu_prices[ch]
            print(f"Item added. Current restaurant total: ₹{rc[n] + current_order_cost}")
        elif ch == 0:
            break
        else:
            print("WRONG CHOICE...!!! Please enter a number between 1 and 40, or 0 to finish.")

    rc[n] = rc[n] + current_order_cost
    print(f"\nTOTAL RESTAURANT BILL (Updated): ₹{rc[n]}")

    input("Press ENTER to return to the Home Menu...")
    return

# PAYMENT FUNCTION
def Payment():
    global i
    
    try:
        cid = int(input("ENTER CUSTOMER ID: "))
    except ValueError:
        print("INVALID INPUT. Customer ID must be a number.")
        return

    # Find the customer index 'n'
    try:
        n = custid.index(cid)
    except ValueError:
        print("❌ INVALID CUSTOMER ID!")
        return

    # Customer found
    print("\n***** PAYMENT SECTION *****")
    print(f"Customer Name: {name[n]}")
    print(f"Room Type: {room[n]}")
    print(f"Stayed Days: {day[n]}")
    print(f"Hotel Bill: ₹{price[n]}")
    print(f"Restaurant Bill: ₹{rc[n]}")
    total_bill = price[n] + rc[n]
    print(f"TOTAL BILL DUE: ₹{total_bill}")

    if p[n] == 1:
        print("\nTHIS BILL HAS ALREADY BEEN PAID. Thank you.")
    else:
        confirm = input("Confirm payment received? (y/n): ")
        if confirm.lower() == "y":
            p[n] = 1
            print("✅ Payment Successful! Thank you.")
        else:
            print("⚠️ Payment remains pending.")

    input("\nPress ENTER to return to the Home Menu...")
    return

# RECORD FUNCTION
def Record():
    global i
    print("\n--- CUSTOMER RECORDS ---")
    if i == 0:
        print("No records found.")
    
    for n in range(0, i):
        print("="*50)
        print(f"Customer ID: {custid[n]}")
        print(f"Name: {name[n]}")
        print(f"Phone: {phno[n]}")
        print(f"Address: {add[n]}")
        print(f"Room: {room[n]} (Days: {day[n]})")
        print(f"Hotel Bill: ₹{price[n]}")
        print(f"Restaurant Bill: ₹{rc[n]}")
        print(f"Total Bill: ₹{price[n] + rc[n]}")
        print(f"Paid Status: {'✅ Yes' if p[n]==1 else '❌ No'}")
    
    input("\nPress ENTER to return to the Home Menu...")
    return

# MAIN EXECUTION GUARD
if __name__ == "__main__":
    Home()