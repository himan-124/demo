#code for generate a random one time password
import random
def generate_otp():
    otp = ""
    for _ in range(6):
        otp += str(random.randint(0, 9))
    return otp
print("Your one time password is:", generate_otp())
