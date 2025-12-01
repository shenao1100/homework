import math

def isprime(num):
    if num < 2:
        return False
    if num == 2:
        return True
    if num % 2 == 0 or num % 3 == 0 or num % 5 == 0:
        return False
    
    i = 7
    while i*i <= num:
        if num % i == 0: return False
        i += 4
        if num % i == 0: return False
        i += 2

    return True

global result
result = 0
ln1 = input().split(" ")
n = int(ln1[0])
k = int(ln1[1])

nums = input().split(" ")

def dfs(start, current_length, current_sum):
    global result
    if current_length == k:
        if isprime(current_sum):
            result += 1
        return
    for i in range(start, n):
        dfs(i + 1, current_length + 1, current_sum + int(nums[i]))

dfs(0, 0, 0)
print(result)