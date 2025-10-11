#code for sum of prime number upto givin limit 
limit=int(input("Enter the limit : "))
total_sum=0
for num in range(2,limit+1):
    is_prime=True
    for i in range(2,int(num**0.5)+1):
        if num%i==0:
            is_prime=False
            break
    if is_prime:
        total_sum+=num
print("The sum of prime numbers up to", limit, "is:", total_sum)
