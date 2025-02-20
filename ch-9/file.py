
# writing to the file
# f = open("text.txt", 'w')
# strr = "Harsh is a good man"
# f.write(strr)
# # print(i)
# f.close()

# reading from the file
# f = open("demo.txt")
# # strr = "Harsh is a good man"
# i = f.read()
# print(i)
# f.close()

# reading line by line from the file
# f = open("demo.txt")
# # strr = "Harsh is a good man"
# # i = f.readlines() # reads all the lines from the line and store it in the list form

# i = f.readline()
# while(i != ""):  # THIS LOOP will automatically read lines from the file, readline will output the single in the form of string
#     print(i, type(i))
#     i = f.readline()


# f.close()



# other functions in file I/O:
# f = open("demo.txt", '+a')
# strr = "Harsh is a good man"
# f.write(strr)
# f.close()

# using with keyword: this allows no manual closing of the file, example:
with open("demo.txt") as f:
    i = f.readline()
    while(i != ""):  
       print(i)
       i = f.readline()
# you don't have to explicitly close the file