A, B = map(int, input().split())

ans = "No"
if (A % 3 != 0 and A + 1 == B):
    ans = "Yes"

print(ans)
