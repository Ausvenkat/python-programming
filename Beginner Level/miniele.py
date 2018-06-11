try:
	a = []
	num = int(input())
	for n in range(num):
	    numbers = int(input())
	    a.append(numbers)
	print(min(a))
except:
	print("InvalidInput")
