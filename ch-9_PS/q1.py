with open("poems.txt") as f:
    text = f.read()
    if("twinkle" in text):
        print("True")
    else:
        print("false")