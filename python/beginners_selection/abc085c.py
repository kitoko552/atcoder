# https://atcoder.jp/contests/abs/tasks/abc085_c

n, y = map(int, input().split())

for i in range(n+1):
    for j in range(n+1 - i):
        k = n - (i+j)
        if 10000*k + 5000*j + 1000*i == y:
            print("%d %d %d" % (k, j, i))
            exit()

print("-1 -1 -1")