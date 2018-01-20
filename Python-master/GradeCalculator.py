#Jacob Reneau
#10/5
#CSCI 220
#Purpose: input/output & grade calculator

print("Welcome to the CSCI 220 Grade Calculator!")
prog_avg=float (input("Please enter your programming assignment average: "))
lab_avg=float (input("Please enter your lab assignment average: "))
hw_avg=float (input("Please enter your homework/classwork assignment average: "))
exam1=float (input("Please enter your first exam score: "))
exam2=float (input("Please enter your second exam score: "))
exam3=float (input("Please enter your third exam score: "))
final_exam=float (input("Please enter your final exam score: "))
attendance=float (input("Please enter your attendance/participation score: "))

average=(prog_avg*.2) + (lab_avg*.15) + (hw_avg*.15) + (exam1*.1) + (exam2*.1) + (exam3*.1) + (final_exam*.1) + (attendance*.1)#

print("Your grade is", average)

if average >= 90:
    print("You earned an A")
elif average >=80 and average < 90:
    print("You earned a B")
elif average >=70 and average < 80:
    print("You earned a C")
elif average >=60 and average < 70:
    print("You earned a D")
elif average <60:
    print("You earned an F")


