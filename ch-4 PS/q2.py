# program to display the marks of 6 students
l1 = []

for i in range(1, 7):
    x = int(input(f"enter the marks of student{i}: "))
    l1.append(x)

print(l1)
l1.sort()
print(l1)
print(len(l1))
