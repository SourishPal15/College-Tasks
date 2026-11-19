''' Q.7) Write a program to implement String Manipulation in Python '''

s = input("Enter a string: ")

print("\nOriginal String:", s)
print("Reverse of String:", s[::-1])
print("Length of String:", len(s))
print("Uppercase:", s.upper())
print("Lowercase:", s.lower())

alpha = 0
digit = 0
special = 0

for i in s:
    if i.isalpha():
        alpha += 1
    elif i.isdigit():
        digit += 1
    elif not i.isspace():
        special += 1

print("\nNumber of Alphabets:", alpha)
print("Number of Digits:", digit)
print("Number of Special Characters:", special)

s2 = input("\nEnter another string to join: ")

print("Joined String:", s + " " + s2)

old = input("\nEnter the word to replace: ")
new = input("Enter the new word: ")

print("Updated String:", s.replace(old, new))

print("\nOther String Manipulation Operations:")

print("Title Case:", s.title())
print("Capitalized:", s.capitalize())
print("Swap Case:", s.swapcase())
print("Stripped String:", s.strip())
print("Words in String:", s.split())