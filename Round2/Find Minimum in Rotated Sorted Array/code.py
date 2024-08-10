n = int(input())
nums = [int(x) for x in input().split()]

min_val = float('inf')
for x in nums:
    if x < min_val:
        min_val = x

print(min_val)
