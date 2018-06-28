num = int(input())
if num < 0:
   print("InvalidInput")
else:
   sum = 0
   # use while loop to iterate un till zero
   while(num > 0):
       sum += num
       num -= 1
   print(sum)
