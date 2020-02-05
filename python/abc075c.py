# https://atcoder.jp/contests/abc075/tasks/abc075_b

h, w = map(int, input().split())

s_list = []
for i in range(h):
    s_list.append(input())

def countUp(hi:int, wi:int):
    if hi >= 0 and hi < h and wi >= 0 and wi < w and s_list[hi][wi] == "#":
        return 1
    else:
        return 0

output_list = []
for hi in range(h):
    s = s_list[hi]
    output = ""
    for wi in range(w):
        if s[wi] == "#":
            output += "#"
        else:
            output += str(countUp(hi-1, wi-1) + countUp(hi-1, wi) + countUp(hi-1, wi+1) + countUp(hi, wi-1) + countUp(hi, wi+1) + countUp(hi+1, wi-1) + countUp(hi+1, wi) + countUp(hi+1, wi+1))

    output_list.append(output)

for o in output_list:
    print(o)