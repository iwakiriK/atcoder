N = int(input())
A = [input() for _ in range(N)]

print(A[1][0] + A[0][:-1])
for i in range(1, N-1):
    print(A[i+1][0]+A[i][1:-1]+A[i-1][-1])
print(A[-1][1:] + A[-2][-1])