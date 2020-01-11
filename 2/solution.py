def fib(index):
    if index < 2:
        return 1
    return fib(index-1) + fib(index-2)

ans = 0 
for i in range(1,33):
    temp = fib(i)
    if temp%2 == 0:
        ans += temp

print(ans)