N, M = map(int, input().split())
P, C, F = [], [], []

for _ in range(N):
    l = list(map(int, input().split()))
    P.append(l[0])
    C.append(l[1])
    F.append(set(l[2:]))

ans = "No"
for i in range(N):
    for j in range(N):
        if P[i] >= P[j] and \
           F[j].issuperset(F[i]) and \
           (P[i] > P[j] or len(F[j]) > len(F[i])):
            ans = "Yes"
print(ans)