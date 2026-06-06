password = input("Enter Password: ")

has_upper = False
has_digit = False

for ch in password:
    if ch.isupper():
        has_upper = True

    if ch.isdigit():
        has_digit = True

score = 0

if len(password) >= 8:
    score += 1

if has_upper:
    score += 1

if has_digit:
    score += 1

if score == 3:
    print("Strong Password")
elif score == 2:
    print("Moderate Password")
else:
    print("Weak Password")