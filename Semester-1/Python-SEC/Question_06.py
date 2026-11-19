''' Q.6) Write a program to implement the use of arrays in Python '''

from array import *

n = int(input("Enter the number of elements: "))

arr = array('i', [])

print("Enter the elements:")

for i in range(n):
    x = int(input())
    arr.append(x)

print("Original Array:", arr)
print("Reverse of Array:", arr[::-1])
print("Sorted Array (Ascending):", sorted(arr))
print("Sorted Array (Descending):", sorted(arr, reverse=True))
print("Length of Array:", len(arr))
print("Maximum Element:", max(arr))
print("Minimum Element:", min(arr))
print("Sum of Elements:", sum(arr))

pos = int(input("Enter the index position to insert an element: "))

while pos < 0 or pos > len(arr):
    print("Invalid index position!")
    pos = int(input("Enter a valid index position: "))

x = int(input("Enter the element to insert: "))

arr.insert(pos, x)
print(f"Inserted {x} at position {pos}")
print("Array after insertion:", arr)

pos = int(input("Enter the index position to remove an element: "))

while pos < 0 or pos >= len(arr):
    print("Invalid index position!")
    pos = int(input("Enter a valid index position: "))

removed = arr.pop(pos)
print(f"Removed {removed} from position {pos}")
print("Array after deletion:", arr)