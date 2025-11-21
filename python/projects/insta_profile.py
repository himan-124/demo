import random
def generate_pass():
    password = ""
    for _ in range(6):
        password += str(random.randint(0, 9))
    return password 
print("Your one time password is:", generate_pass())
