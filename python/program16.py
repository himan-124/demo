#write a code to identify good time to buy a stock
n = int(input("Enter the number of days: "))# n for showing number of days 
prices = list(map(int, input("Enter the stock prices separated by space: ").split()))# prices for storing stock prices
if n != len(prices):# check if number of prices matches number of days
    print("Number of prices entered does not match the number of days.")# error message
else:
    min_price = prices[0]# initialize minimum price
    max_profit = 0# initialize maximum profit
    buy_day = 0# initialize buy day
    sell_day = 0# initialize sell day

    for i in range(1, n):# iterate through each day's price
        if prices[i] - min_price > max_profit:# check for maximum profit
            max_profit = prices[i] - min_price# update maximum profit
            sell_day = i# update sell day
        if prices[i] < min_price:# check for new minimum price
            min_price = prices[i]# update minimum price
            buy_day = i# update buy day

    if max_profit > 0:# check if there is a profit
        print(f"Buy on day {buy_day + 1} at price {prices[buy_day]}")# print buy day and price
        print(f"Sell on day {sell_day + 1} at price {prices[sell_day]}")# print sell day and price
        print(f"Maximum Profit: {max_profit}")# print maximum profit
    else:
        print("No good time to buy and sell for profit.")
