for tc in range(int(input())):
    print(sorted(list(map(int, input().split())))[tc%3])
