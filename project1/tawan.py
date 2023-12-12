def twn(x, y):
    if y == 0:
        return 1
    else:
        return x * twn(x, y-1)
        
result = twn(x, y)
print(result)
