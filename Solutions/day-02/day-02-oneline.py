# add a new line at the end of the input ( for the correct format of output )
[print(sorted(list(map(int, input().split())))[tc%3]) for tc in range(int(input()))] 
