from random import randint

string = input()
secret = ""

pickRandom = lambda array: array[randint(0, len(array) - 1)]

letters = [chr(i) for i in range(97, 97+26)]

replaced_with = {}

for letter in string:
    
    if letter.isalpha():
        
        se_letter = ''
        
        if replaced_with.get(letter.lower(), 0) == 0:
            
            l = pickRandom(letters)
            
            while l == letter.lower(): l = pickRandom(letters)
            
            letters.remove(l)
            
            replaced_with[letter.lower()] = l
            
        se_letter = replaced_with[letter.lower()]
        
        if letter.isupper(): se_letter = se_letter.upper()
        
        secret += se_letter
            
    else:
        
        secret += letter
            
            
print(secret)


