#include <iostream>
using namespace std;

int main() {
	int t1,m1,t2,m2;
	cin>>t1>>m1;
	cin>>t2>>m2;
	int a=t1-t2;
	int b=m1-m2;
	if(a<0 ||b<0){
	a=-a;b=-b;
cout<<a<<' '<<b;	
	}
	else
{
	cout<<a<<' '<<b;
}	
	return 0;
}
