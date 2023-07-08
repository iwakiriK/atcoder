N, K = map(int, input().split())
ab = [tuple(map(int,input().split())) for _ in range(N)]

ab.sort()
res = sum(b for _, b in ab)

if (res <= K):
    print(1)
    exit(0)

for a, b in ab:
    res -= b
    if res <= K:
        print(a + 1)
        break
