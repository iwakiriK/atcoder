N, P, Q = map(int, input().split())
d = min(map(int, input().split()))

ans = min(P, Q + d)
print(ans)
