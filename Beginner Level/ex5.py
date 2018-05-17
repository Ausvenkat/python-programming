v=int(input())
s=int(input())
t=int(input())
if (v>=s and v>=t):
     print(v)
elif (s>=t and s>=v):
     print(s)
elif (t>=v and t>=s):
     print(t)
else:
     print("Invaild Input")
