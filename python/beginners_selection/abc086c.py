# https://atcoder.jp/contests/abs/tasks/arc089_a

n = int(input())

t_list = [0]
x_list = [0]
y_list = [0]
for d in range(n):
    t, x, y = map(int, input().split())
    t_list.append(t)
    x_list.append(x)
    y_list.append(y)

def canTravel():
    for i in range(n):
        dt = t_list[i+1] - t_list[i]
        dist = abs(x_list[i+1] - x_list[i]) + abs(y_list[i+1] - y_list[i])

        if dist > dt:
            return False
        
        if dt % 2 != dist % 2:
            return False
    
    return True

print("Yes" if canTravel() else "No")
