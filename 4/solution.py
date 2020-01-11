def ispalindrome(integer):
    string = str(integer)
    length = len(string)-1
    for iterator in range(length//2 + length % 2):
        if(string[iterator] != string[length-iterator]):
            return False
    return True


ma = 100 * 100
for i in range(100, 1000):
    for j in range(100, 1000):
        if ma < i*j:
            if(ispalindrome(i*j)):
                ma = i*j
print(ma)
