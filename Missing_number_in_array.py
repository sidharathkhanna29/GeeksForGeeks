#code
#Testcases
t = int(input())
total = 0
for i in range(t):
    #NaturalNumber
    n = int(input())
    #Array 
    arr = list(map(int, input().split()))
    total = (n*(n + 1) // 2)
    print(total - sum(arr)) 
