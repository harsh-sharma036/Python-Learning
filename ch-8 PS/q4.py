#  recursive program to print the sum of n natural numbers

# def func(n, sum):
#     if(n == 0):
#         return sum
    
#     sum = n + func(n-1, sum)
#     return sum

def func(n):
    if(n == 1):
        return 1
    return n + func(n-1)    


print(func(7))