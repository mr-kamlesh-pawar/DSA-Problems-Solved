dict = {}

with open("hii.txt", 'r') as fi:
    for line in fi:
        for char in line:
            if char != '\n' or char!='':
                if char in dict:
                    dict[char] += 1
                else:
                    dict[char] = 1

for i,j in dict.items():
    print(f"Character {i} having {j} occurances")
