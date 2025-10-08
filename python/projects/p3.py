#code for making a simple grading system that takes percentage in input and prints the grade 75-100=A,50-74=B,25-49=C,value<=24-D
def grade_system(percentage):
    if 75 <= percentage <= 100:
        return 'A'
    elif 50 <= percentage < 75:
        return 'B'
    elif 25 <= percentage < 50:
        return 'C'
    elif 0 <= percentage < 25:
        return 'D'
    else:
        return 'Invalid percentage'
# Example usage
percentage = float(input("Enter the percentage: "))
grade = grade_system(percentage)
print(f"The grade is: {grade}")

    
