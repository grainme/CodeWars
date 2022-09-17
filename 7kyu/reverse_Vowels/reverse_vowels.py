s = input()
d = ""
k = 0
v = "aeoiuAEUOI"
x = "".join(i for i in s if i in v)
x = x[::-1]
for i in range(len(s)):
    if s[i] in v:
        d+=x[k]
        k+=1
    else:
        d+=s[i]
print(d)

# input : hola --> output : halo