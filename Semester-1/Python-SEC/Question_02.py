''' Q.2) Write a program to calculate total marks, percentage and grade of a student. Marks
obtained in each of the three subjects are to be input by the user. Assign grades according 
to the following criteria:

    Grade A: Percentage >= 80
    Grade B: Percentage >= 70 and < 80
    Grade C: Percentage >= 60 and < 70
    Grade D: Percentage >= 40 and < 60
    Grade F: Percentage < 40              '''

marks1 = float(input("Enter marks obtained in 1st subject: "))
marks2 = float(input("Enter marks obtained in 2nd subject: "))
marks3 = float(input("Enter marks obtained in 3rd subject: "))

if marks1<=100 and marks2<=100 and marks3<=100:

    total_marks = marks1 + marks2 + marks3
    percentage = (total_marks / 300) * 100

    print(f"Total Marks: {total_marks:.2f}/300")
    print(f"Percentage: {percentage:.2f}%")

    if percentage >= 80:
        print("Grade: A")
    elif percentage >= 70 and percentage < 80:
        print("Grade: B")
    elif percentage >= 60 and percentage < 70:
        print("Grade: C")
    elif percentage >= 40 and percentage < 60:
        print("Grade: D")
    elif percentage < 40:
        print("Grade: E")

else:
    print("Marks cannot be more than 100, please enter properly!")
