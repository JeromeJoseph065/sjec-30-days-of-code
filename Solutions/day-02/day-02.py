for tc in range(int(input())):
    sides = list(map(int, input().split()))
    sides.sort()
    print(sides[tc%3])
