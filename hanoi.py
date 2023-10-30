def hanoi(n, awali,magsad,komaki):
    if n==1:
        print("move disk 1 from",awali, "to magsad", magsad)
        return
    hanoi(n-1 ,awali,komaki,magsad)
    print("move disk",n,"from awali",awali,"to magsad", magsad)
    hanoi(n-1,komaki,magsad,awali)

hanoi(3,"a","c","b")
