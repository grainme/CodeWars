t = int(input())

for _ in range(t):
    res = "NO"
    nbr = int(input())
    s = input()
    try:
        if len(s[s.index("8") :]) >= 11:
            res = "YES"
    except Exception:
        res = "NO"
    print(res)
        
        
# CODEFORCES Problem -A : https://codeforces.com/contest/1167/problem/A