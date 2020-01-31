# https://atcoder.jp/contests/abs/tasks/arc065_a

s = input()
l = ["dream", "dreamer", "erase", "eraser"]
t = s
while len(t) > 0:
    for word in l:
        if t.endswith(word):
            index = len(t) - len(word)
            if index == 0:
                print("YES")
                exit()
            elif index > 0:
                t = t[:index]
                break
        if word == l[len(l) - 1]:
            print("NO")
            exit()

print("NO")

