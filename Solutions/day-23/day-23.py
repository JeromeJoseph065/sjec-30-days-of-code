n = input()

count = 500

while count + 1:
    
    if n == n[::-1]:
        break
    
    n = str(int(n) + int(n[::-1]))
    count -= 1

if n == n[::-1]:
    print(n)
else:
    print('NA')
    
