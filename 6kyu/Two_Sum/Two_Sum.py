arr = [1,2,3,8]
target = 11
d = []
for i in arr:
    diff = target - i
    if diff in d:
        print(diff,i,sep=" ")
    else:
        d.append(i)
'''
Two Sum in O(n) Algotithm in Python
'''