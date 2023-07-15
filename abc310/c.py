N = int(input())
st = set()

for _ in range(N):
    S = input()
    st.add(min(S, S[::-1]))
print(len(st))
