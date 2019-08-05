try:
	lower=int(input())
	upper=int(input())
	for i in range(lower+1,upper):
	     if(i%2!=0):
	          print(i)
except:
	print("InvalidInput")



#include <iostream>
using namespace std;

int main() {
	int a,b,n;
	cin>>a>>b;
	for(int i=a;i<b-1;i++){
		n=i+1;
		if(n%2!=0){
			cout<<n<<' ';
		}
	}
	return 0;
}
