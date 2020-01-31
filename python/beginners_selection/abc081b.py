def getCountDividing(list, length, count=0):
    dividedList = []
    c = count
    for a in list:
        if a % 2 == 0:
            dividedList.append(a / 2)
        else:
            break
    
    if len(dividedList) == length:
        c += 1
        return getCountDividing(dividedList, length, c)
    else:
        return c

n = int(input())
list = map(int, input().split())
count = 0

res = getCountDividing(list, n)
print(res)
