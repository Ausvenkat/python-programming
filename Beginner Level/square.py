a=raw_input().split()
b=raw_input().split()
c=raw_input().split()
d=raw_input().split()
if a[0].isdigit() and a[1].isdigit():
	if b[0].isdigit() and b[1].isdigit():
		if c[0].isdigit() and c[1].isdigit():
			if d[0].isdigit() and d[1].isdigit():
				if a[0]==b[0]:
					v=int(a[1])-int(b[1])
					v=abs(v)
				else:
					v=0
				if a[1]==d[1]:
					r=int(a[0])-int(d[0])
					r=abs(r)
				else:
					r=0
				if b[1]==c[1]:
					s=int(b[0])-int(c[0])
					s=abs(s)
				else:
					s=0
				if c[0]==d[0]:
					t=int(c[1])-int(d[1])
				else:
					t=0
				if v==r==s==t:
					print "yes"
				else:
					print "no"
