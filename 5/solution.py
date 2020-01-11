from math import gcd

N = 20
ans = 1
for i in range(1, N+1):
    ans *= i//gcd(ans, i)

print(ans)  # 232792560
