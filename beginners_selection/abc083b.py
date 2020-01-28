# https://atcoder.jp/contests/abs/tasks/abc083_b

n, a, b = map(int, input().split())

array = []
for i in range(1, n+1):
    str_i = str(i)

    digit_sum = 0
    if len(str_i) >= 2:
        for s in str_i:
            digit_sum += int(s)
    else:
        digit_sum = i
    
    if a <= digit_sum and digit_sum <= b:
        array.append(i)

print(sum(array))
