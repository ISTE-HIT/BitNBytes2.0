s = input()
first_half = s[:4]
digit_half = s[4:]
last_digit = int(digit_half)

if first_half == "ISTE" and 1 <= last_digit <= 349 and last_digit != 316:
    print("Yes")
else:
    print("No")