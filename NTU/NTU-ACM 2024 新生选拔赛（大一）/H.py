input()
result = 0
for i in input().split(" "):
    i = int(i)
    if i % 2 != 0:
        result += i
print(result)
    
    