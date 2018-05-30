def permutation(b):
	if len(b)==0:
		return []
	elif len(b)==1:
		return [b]
	else:
		l=[]
		for i in range(len(b)):
			x=b[i]
			xs=b[:i]+b[i+1:]
			for p in permutation(xs):
				l.append([x]+p)
		return l
b=raw_input()
if b.isdigit():
	data=list(b)
	w=[]
	for p in permutation(data):
		if "".join(p) not in w:
			w.append("".join(p))
	for i in w:
		print i
