n = int(input())
arr = []
for _ in range(n):
    x = int(input())
    arr.append(x)

ans = 0
for num in arr:
    ans ^= num

print(ans, end=" ")