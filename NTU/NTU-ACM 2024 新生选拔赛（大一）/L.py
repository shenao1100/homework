def gcd(a, b):
    if b != 0:
        print(f"{a} {b}")
        gcd(b, a%b)
    else:
        print(a)
        return
    
    

a = input()
for i in range(int(a)):
    g = input().split(' ')
    gcd(int(g[0]), int(g[1]))
    