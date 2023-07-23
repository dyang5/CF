// Python solution using Quadratic Formula
import math
 
t = int(input())
 
for _ in range(t):
    n , c = map(int, input().split())
 
    a = list(map(int, input().split()))
 
    sm = 0
    squareSum = 0
    for i in a:
        sm += i
        squareSum += i*i
    
    ans = ((sm * sm + n * (c - squareSum))**(0.5) - sm) / (2*n)
    print(int(ans))