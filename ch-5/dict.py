dicts = {
    "harsh" : "84",
    "shravani" : 89.88,
    "sonuu" : 99,
    list : [1, 2, 3],
    tuple : (4, 5, 6),
    list: [56, 45, 78]
}

# print(dicts)
# print(len(dicts))
# print(dicts["harsh"])      # it returns an error when the following key is not there
# print(dicts.get("harsh2")) # it return None when the following key is not there in the dictionary
print(dicts[list])
print(dicts[tuple])
print(dicts.items())
print(dicts.keys())
print(dicts.values())

# if we create 2 lists in the dictionary the first one will get overwrite
dicts.update({"cutie" : 100, "harshhh" : 99})
print(dicts)
print(type(dicts["shravani"]))
print(type(dicts[tuple]))