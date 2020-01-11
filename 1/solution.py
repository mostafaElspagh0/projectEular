def solution(k):
    ans = 0
    for i in range(k):
        if i%3 == 0 or i%5 == 0:
            ans += i
    return ans
print(solution(1000))