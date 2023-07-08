N1, N2, M = map(int, input().split())
G = [[] for _ in range(N1+N2)]

for _ in range(M):
    a, b = map(int, input().split())
    a -= 1
    b -= 1
    G[a].append(b)
    G[b].append(a)

ans = 1

for s in (0, -1):
    dist = [-1] * (N1 + N2)
    dist[s] = 0
    que = [s]
    for u in que:
        for v in G[u]:
            if dist[v] == -1:
                dist[v] = dist[u] + 1
                que.append(v)
    ans += max(dist)
print(ans)
