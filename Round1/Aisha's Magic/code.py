def is_magical(n):
    if n < 0:
        return "No"
    curr_num = n
    sum = 0
    while n > 0:
        digit = n % 10
        sum += digit ** 3
        n //= 10
    if sum == curr_num:
        return "Yes"
    return "No"

t = int(input())
for _ in range(t):
    n = int(input())
    print(is_magical(n))