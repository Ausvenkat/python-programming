try:
	n=int(input())
	temp=n
	rev=0
	while(n>0):
	     dig=n%10
	     rev=rev*10+dig
	     n=n//10
	if(temp==rev):
	     print("yes")
	else:
	     print("no")
except:
  print("InvalidInput")



#include <iostream>
#include<string>
using namespace std;
int main() 
{
 int n,split,sum=0;
 cin>>n;
 int a=n;
 while(n!=0){
 	split=n%10;
 	sum=sum*10+split;
 	n=n/10;
 }
 if(sum==a){
 	cout<<"yes";
 }
 else{
 	cout<<"no";
 }
    
    return 0;
}
