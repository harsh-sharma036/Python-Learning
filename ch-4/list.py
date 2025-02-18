list1 = ["apple", [1, 2, 3], True, None, 6.78, "mango"]

# print(list1)
# print(list1[1][1])
# print(list1[0][1]) #prints 'p' of apple
# print(list1[0: 4])

l1 = [4, 1, 67, 45, 3, 90]
# print(l1)
print(l1.sort())
l1.append(46)
print(l1)
l1.sort()
l1.insert(3, 56)

l1.sort()
# l1.reverse()

# l1.remove(45)
l1.pop()
print(l1)
print(type(l1))
print(l1.count(5))
print(len(l1))