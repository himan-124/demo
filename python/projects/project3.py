#write a program in which any labor can find their intrested work field 
def find_work_field():
    print("Welcome to the Work Field Finder!")
    print("Please answer the following questions to find your interested work field.")

    skills = input("What are your skills? (e.g., programming, writing, design, construction): ").lower()
    interests = input("What are your interests? (e.g., technology, art, science): ").lower()
    experience = input("Do you have any prior experience in a specific field? (yes/no): ").lower()

    if "programming" in skills or "technology" in interests:
        print("You might be interested in software development or IT.")
    elif "writing" in skills or "art" in interests:
        print("You might be interested in content creation or graphic design.")
    elif "science" in interests:
        print("You might be interested in research or laboratory work.")
    else:
        print("Consider exploring fields like sales, customer service, or administration.")

    if experience == "yes":
        print("Your prior experience can help you excel in your chosen field.")
    else:
        print("Don't worry! Many fields offer training and entry-level positions.")

find_work_field()

