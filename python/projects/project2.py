# HOTEL MANAGEMENT PROGRAM

import random

# GLOBAL LIST DECLARATION
name = []
phno = []
add = []
room = []
price = []
rc = []
p = []
roomno = []
custid = []
day = []

# GLOBAL VARIABLE
i = 0

# HOME FUNCTION
def Home():
    print("""\t\t\t\tWELCOME TO GRAND VILLAS\n
    \t\t\t1. For Booking
    \t\t\t2. For Rooms Information
    \t\t\t3. For Cafe Menu Information
    \t\t\t4. For Payment
    \t\t\t5. Check Record
    \t\t\t0. For Exit\n""")

    ch = int(input("-> "))
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
    else:
        exit()

# BOOKING FUNCTION
def Booking():
    global i
    print("BOOKING ROOMS\n")

    while 1:
        n = str(input("NAME: "))
        p1 = str(input("PHONE NUMBER: "))
        a = str(input("ADDRESS: "))

        if n != "" and p1 != "" and a != "":
            name.append(n)
            add.append(a)
            break
        else:
            print("\tNAME, PHONE NUMBER AND ADDRESS CAN NOT BE EMPTY!!!\nPLEASE FILL ALL COLUMNS PROPERLY\n")

    print("""------------SELECT ROOM TYPE------------
        1. NON-AC NORMAL(2 PEOPLE) – ₹3500/day
        2. NON-AC STANDARD(4 PEOPLE) – ₹4500/day
        3. AC NORMAL(2 PEOPLE) – ₹6500/day
        4. AC STANDARD(4 PEOPLE) – ₹7500/day
        5. KING STAY – ₹25000/day
        6. QUEEN STAY – ₹27000/day
        \t\tPRESS 0 TO KNOW ABOUT ROOM PRICES\n""")

    ch = int(input("-> "))

    if ch == 0:
        print("""YOU HAVE TO PRESS NUMBERS FOR YOUR CHOICE
        1. NON-AC NORMAL(2 PEOPLE) -----3500inr per day
        2. NON-AC STANDARD(4 PEOPLE) -----4500inr per day
        3. AC NORMAL(2 PEOPLE) -----6500inr per day
        4. AC STANDARD(4 PEOPLE) -----7500inr per day
        5. KING STAY -----25000inr per day
        6. QUEEN STAY -----27000inr per day\n""")
        ch = int(input("-> "))

    if ch == 1:
        room.append('NON-AC NORMAL(2 PEOPLE)')
        price.append(3500)
    elif ch == 2:
        room.append('NON-AC STANDARD(4 PEOPLE)')
        price.append(4500)
    elif ch == 3:
        room.append('AC NORMAL(2 PEOPLE)')
        price.append(6500)
    elif ch == 4:
        room.append('AC STANDARD(4 PEOPLE)')
        price.append(7500)
    elif ch == 5:
        room.append('KING STAY')
        price.append(25000)
    elif ch == 6:
        room.append('QUEEN STAY')
        price.append(27000)
    else:
        print("WRONG CHOICE...!!!\n")

    # Stay Days
    days = int(input("ENTER NUMBER OF STAYED DAYS: "))
    day.append(days)
    total_room_cost = price[-1] * days
    price[-1] = total_room_cost

    rn = random.randrange(40) + 300
    cid = random.randrange(40) + 10

    while rn in roomno or cid in custid:
        rn = random.randrange(60) + 300
        cid = random.randrange(60) + 10

    rc.append(0)
    p.append(0)

    if p1 not in phno:
        phno.append(p1)
    else:
        for n in range(0, i):
            if p1 == phno[n] and p[n] == 0:
                print("CUSTOMER'S PHONE NUMBER ALREADY EXISTS BUT PAYMENT IS PENDING!")
                name.pop(i)
                add.pop(i)
                Booking()

    print("\n*** ROOM IS BOOKED SUCCESSFULLY ***")
    print("ALLOTTED ROOM NUMBER:", rn)
    print("CUSTOMER ID:", cid)

    roomno.append(rn)
    custid.append(cid)
    i = i + 1

    n = int(input("0 --BACK\n -> "))
    if n == 0:
        Home()
    else:
        exit()

# ROOMS INFORMATION FUNCTION
def Rooms_Info():
    print("""  Room Specifications & Facilities\n\n
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
    n = int(input("0 --BACK\n -> "))
    if n == 0:
        Home()
    else:
        exit()

# RESTAURANT FUNCTION
def Restaurant():
    cid = int(input("CUSTOMER ID: "))
    global i
    f = 0
    r = 0
    for n in range(0, i):
        if custid[n] == cid and p[n] == 0:
            f = 1
            print("""\t\t\t🍽️ THE GRAND VILAS MENU \n
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
""")
            print("PRESS 0 - TO END")
            ch = 1
            while ch != 0:
                ch = int(input("-> "))
                if ch == 1: r += 60
                elif ch == 2: r += 120
                elif ch == 3: r += 100
                elif ch == 4: r += 130
                elif ch == 5: r += 100
                elif ch == 6: r += 90
                elif ch == 7: r += 40
                elif ch == 8: r += 120
                elif ch == 9: r += 320
                elif ch == 10: r += 180
                elif ch == 11: r += 280
                elif ch == 12: r += 350
                elif ch == 13: r += 450
                elif ch == 14: r += 30
                elif ch == 15: r += 120
                elif ch == 16: r += 220
                elif ch == 17: r += 100
                elif ch == 18: r += 180
                elif ch == 19: r += 90
                elif ch == 20: r += 190
                elif ch == 21: r += 180
                elif ch == 22: r += 80
                elif ch == 23: r += 80
                elif ch == 24: r += 120
                elif ch == 25: r += 90
                elif ch == 26: r += 280
                elif ch == 27: r += 140
                elif ch == 28: r += 120
                elif ch == 29: r += 45
                elif ch == 30: r += 80
                elif ch == 31: r += 70
                elif ch == 32: r += 140
                elif ch == 33: r += 150
                elif ch == 34: r += 180
                elif ch == 35: r += 40
                elif ch == 36: r += 160
                elif ch == 37: r += 30
                elif ch == 38: r += 50
                elif ch == 39: r += 50
                elif ch == 40: r += 80
                elif ch == 0: pass
                else: print("WRONG CHOICE...!!!")

            print("TOTAL RESTAURANT BILL:", r)
            r = r + rc.pop(n)
            rc.append(r)
        else:
            pass

    if f == 0:
        print("INVALID CUSTOMER ID!!!")

    n = int(input("0 --BACK\n -> "))
    if n == 0:
        Home()
    else:
        exit()

# PAYMENT FUNCTION
def Payment():
    cid = int(input("ENTER CUSTOMER ID: "))
    global i
    f = 0
    for n in range(0, i):
        if custid[n] == cid:
            f = 1
            print("\n***** PAYMENT SECTION *****")
            print("Customer Name:", name[n])
            print("Room Type:", room[n])
            print("Stayed Days:", day[n])
            print("Hotel Bill:", price[n])
            print("Restaurant Bill:", rc[n])
            total_bill = price[n] + rc[n]
            print("Total Bill:", total_bill)

            confirm = input("Have you done the payment? (y/n): ")
            if confirm.lower() == "y":
                p[n] = 1
                print("✅ Payment Successful! Thank you.")
            else:
                print("⚠️ Please first clear the payment!")

    if f == 0:
        print("❌ Invalid Customer ID!")

    n = int(input("0 --BACK\n -> "))
    if n == 0:
        Home()
    else:
        exit()

# RECORD FUNCTION
def Record():
    global i
    for n in range(0, i):
        print("Name:", name[n], 
              "| Phone:", phno[n], 
              "| Address:", add[n], 
              "| Room:", room[n], 
              "| Hotel Bill:", price[n], 
              "| Days:", day[n], 
              "| Restaurant Bill:", rc[n], 
              "| Paid:", "Yes" if p[n]==1 else "No")
    n = int(input("0 --BACK\n -> "))
    if n == 0:
        Home()
    else:
        exit()

