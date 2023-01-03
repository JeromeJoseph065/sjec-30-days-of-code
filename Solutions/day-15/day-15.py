mp = {
    "I": 1,
    "V": 5,
    "X": 10,
    "L": 50,
    "C": 100,
    "D": 500,
    "M": 1000
}

roman = input().upper()

i, number = 0, 0
while i < len(roman) - 1:
    if mp[roman[i]] < mp[roman[i+1]]:
        number += mp[roman[i+1]] - mp[roman[i]]
        i += 1
    else:
        number += mp[roman[i]]
    i += 1

if i < len(roman): number += mp[roman[i]]

print(number)
