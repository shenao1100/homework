init_health = 2025
b_round = 0

while init_health > 0:
    b_round += 1
    init_health -= 5
    if b_round % 2 == 1:
        init_health -= 15
    else:
        init_health -= 2
    
    if b_round % 3 == 1:
        init_health -= 2
    elif b_round % 3 == 2:
        init_health -= 10
    elif b_round % 3 == 0:
        init_health -= 7

print(b_round)