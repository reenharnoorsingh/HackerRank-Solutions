from collections import Counter
# A counter is a container that stores elements as dictionary keys, and their counts are stored as dictionary values.
X = int(input())
S = Counter(map(int, input().split()))
N = int(input())
earnings = 0
for customer in range(N):
    size, x_i = map(int, input().split())
    if size in S and S[size] > 0:
        S[size] -= 1
        earnings += x_i

print(earnings)
