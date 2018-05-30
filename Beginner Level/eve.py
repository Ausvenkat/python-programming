try:
	lower=int(input())
	upper=int(input())
	for i in range(lower+1,upper):
	     if(i%2==0):
	          print(i)
except:
	print("Invalid Input")
