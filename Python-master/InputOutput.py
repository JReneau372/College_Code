# Jacob Reneau
# 9/14/2016
# CSCI 220
# Purpose: Basic input and output


name=input("What is your name?")

print("Hello,", name, "!")

grade_1=int(input("What did you get for classwork 1?"))

grade_2=int(input("What did you get for classwork 2?"))

grade_3=int(input("What did you get for homework 1?"))

color=input("What is your favorite color?")

animal=input("What is your favorite animal?")

grade_sum=(grade_1 + grade_2 + grade_3)

grade_average=(grade_sum / 3)

print(name, "data:")

print("Homework/Classwork Average:", grade_average)

code_name=(color, animal)

print("CodeName:",color,"-",animal)
