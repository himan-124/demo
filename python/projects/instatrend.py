import time
import sys
def type_balak(line, char_delay=0.065):
    for char in line:
        print(char, end='', flush=True)
        time.sleep(char_delay)
    print()
def print_lyrics():
    lyrics = [
        "CHAAALUU HO GYAA...?",
        "HNNNN",
        "PHOOOL HAII GULABB KA MEHEKKK LIJIYEEE",
        "PHOOOL HAII GULABB KA MEHEKKK LIJIYEEE",
        "AIEEEENNNNN...","AURRR....!!!",
        "PHOOOL HAII GULABB KA MEHEKKK LIJIYEEE....",
        "SAIYARAA TU TOHHH BADLAAA NHIIII HAI ",
        "MAOUSAMMM ZARAAAA SA BADLAAAA NAHIII HAIIII....",
        "ROOOOK DU.....?",
        "NHI.....","SAIYARAA TU TOHHH BADLAAA NHIIII HAI ",
        "MAOUSAMMM ZARAAAA SA BADLAAAA NAHIII HAIIII....","ROOK DUUU....?",
        "BHHHAAAGGGGGGG..........!!!!!!!!!",
    ]
    delays = [0.5, 0.5, 1.0, 1.0, 0.7, 0.6,1.5, 1.5,1.5,0.5,0.7, 1.5,1.2,1.5,1.5,0.3,0.7]
    print("One last trending video code for you :\n")
    time.sleep(1.5)
    for i, line in enumerate(lyrics):
        type_balak(line)
        time.sleep(delays[i])

print_lyrics()