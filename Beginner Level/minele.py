try:
	lst = []
	num = int(input())
	for n in range(num):
	    numbers = int(input())
	    lst.append(numbers)
	print(min(lst))
except:
	print("InvalidInput")
