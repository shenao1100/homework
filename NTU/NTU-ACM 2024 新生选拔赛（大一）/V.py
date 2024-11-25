a = input()
for i in range(int(a)):
    g = input().split(' ')
    planents = int(g[0])
    orbit_weapen_coast = int(g[1])
    orbit_dict = {}
    total_coast = 0 
    for planent in input().split(' '):
        planent = int(planent)
        if planent in orbit_dict:
            orbit_dict[planent] += 1
        else:
            orbit_dict[planent] = 1
    for orbit_name in orbit_dict.keys():
        if orbit_dict[orbit_name] > orbit_weapen_coast:
            #啊啊啊啊啊啊啊，全死了
            total_coast += orbit_weapen_coast
        else:
            total_coast += orbit_dict[orbit_name]

    print(total_coast)
    