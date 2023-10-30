def twn(x, y):
    if y == 0:
        return 1
    else:
        return x * twn(x, y-1)
x = int(input("Enter number one: "))
y = int(input("Enter number two: "))

result = twn(x, y)
print(result)