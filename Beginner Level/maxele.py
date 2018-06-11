try:
	v=[]
	n=int(input())
	for i in range(1,n+1):
	    b=int(input())
	    v.append(b)
	v.sort()
	print(v[n-1])
except:
	print("InvalidInput")
