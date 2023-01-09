palindrome = []
count = 0

for num1 in range(100, 1000):
    for num2 in range(100, 1000):
        product = num1 * num2
        if num2 > num1 and str(product) == str(product)[::-1]:
            palindrome.append(product)
            count += 1
            print(f"#{count} - {num1} * {num2} = {palindrome[-1]}")

print(max(palindrome))
