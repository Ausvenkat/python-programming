v=raw_input()
d=v[::-1]
if v==d:
	print "0"
else:
	s=0
	l=[]
	for i in range(0,len(v)):
		l.append(v[i])
	res=[]
	for i in l:
		if l.count(i)==1:
			res.append(i)
	print len(res)
