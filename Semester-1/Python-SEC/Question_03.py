''' Q.3) Write a menu diiven program, using user defined functions to find the area of rectangle,
 square, circle and triangle by accepting suitable input parameters from user '''

def RectangleArea(l, b):
    return l * b

def SquareArea(s):
    return s * s

def CircleArea(r):
    return 3.14 * r * r

def TriangleArea(b, h):
    return 1/2 * b * h

print("1. Area of Rectangle")
print("2. Area of Square")
print("3. Area of Circle")
print("4. Area of Triangle")

choice = int(input("Enter your choice: "))

match choice:

    case 1:
        length = float(input("Enter length of rectangle: "))
        breadth = float(input("Enter breadth of rectangle: "))
        area = RectangleArea(length, breadth)
        print(f"Area of Rectangle = {area:.2f} unit sq")

    case 2: 
        side = float(input("Enter side of square: "))
        area = SquareArea(side)
        print(f"Area of Square = {area:.2f} unit sq")

    case 3:
        radius = float(input("Enter radius of circle: "))
        area = CircleArea(radius)
        print(f"Area of Circle = {area:.2f} unit sq")

    case 4:
        base = float(input("Enter base of triangle: "))
        height = float(input("Enter height of triangle: "))
        area = TriangleArea(base, height)
        print(f"Area of triangle = {area:.2f} unit sq")

    case _:
        print("Invalid Choice!")
