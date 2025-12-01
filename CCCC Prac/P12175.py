global result
result = 1

def verify(trees: list):
    former = -1
    for i in trees:
        i = int(i)
        if i < former:
            return False
        former = i
    global result
    result = max(len(trees), result)
    return True

def get_new_tree(cut_first, trees: list):
    
    new_tree = []
    index = 0 if cut_first else 1
    while index < len(trees):
        new_tree.append(trees[index])
        index += 2
    return new_tree

def move(trees):
    if len(trees) <= 1:
        return
    verify(trees)
    move(get_new_tree(True, trees))
    move(get_new_tree(False, trees))


input()
ln = input().split(" ")
move(ln)
print(result)
