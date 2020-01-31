# https://atcoder.jp/contests/abs/tasks/abc088_b

n = int(input())
a_list = sorted(list(map(int, input().split())), reverse=True)

alice_hands = []
bob_hands = []

for a in a_list:
    if len(alice_hands) == len(bob_hands):
        alice_hands.append(a)
    else:
        bob_hands.append(a)

print(sum(alice_hands) - sum(bob_hands))