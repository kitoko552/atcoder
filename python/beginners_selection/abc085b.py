# https://atcoder.jp/contests/abs/tasks/abc085_b

n = int(input())
d_list = []
for d in range(n):
    d_list.append(int(input()))

print(len(set(d_list)))