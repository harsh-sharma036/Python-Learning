import random

computer = random.choice([-1, 0, 1])

your_dict = {
    "s" : -1,
    "p" : 0,
    "sc" : 1
}

# print("STONE - PAPER - SCISSORS GAME\nEnter your choice:\n1. s = Stone\n2. p = Paper\n3. sc = Scissors")
# you = input("your choice: ")

# reversed_dic = {
#     -1 : "STONE",
#     0 : "PAPER",
#     1 : "SCISSORS"  
# }

# your_choice = your_dict[you]

# print(f"you entered: {reversed_dic[your_choice]} and computer entered: {reversed_dic[computer]}")

# if(computer == your_choice):
#     print("Match Drawn")
# else:
#     if(computer == -1 and your_choice==1):
#         print("COMPUTER WON")
    
#     elif(computer == -1 and your_choice==0):
#         print("YOU WON")
    
#     elif(computer == 0 and your_choice==1):
#         print("YOU WON")
    
#     elif(computer == 0 and your_choice==-1):
#         print("COMPUTER WON")
    
#     elif(computer == 1 and your_choice==0):
#         print("COMPUTER WON")
    
#     elif(computer == 1 and your_choice==-1):
#         print("YOU WON")
    
#     else:
#         print("Technical Error")


print("STONE - PAPER - SCISSORS GAME\nEnter your choice:\n1 = Stone\n2 = Paper\n3 = Scissors")
you = int(input("your choice: "))

reversed_dic = {
    -1 : "STONE",
    0 : "PAPER",
    1 : "SCISSORS"  
}

# your_choice = your_dict[you]

print(f"you entered: {reversed_dic[you]} and computer entered: {reversed_dic[computer]}")

if(computer == you):
    print("Match Drawn")
else:
    if(computer == -1 and you==1):
        print("COMPUTER WON")
    
    elif(computer == -1 and you==0):
        print("YOU WON")
    
    elif(computer == 0 and you==1):
        print("YOU WON")
    
    elif(computer == 0 and you==-1):
        print("COMPUTER WON")
    
    elif(computer == 1 and you==0):
        print("COMPUTER WON")
    
    elif(computer == 1 and you==-1):
        print("YOU WON")
    
    else:
        print("Technical Error")