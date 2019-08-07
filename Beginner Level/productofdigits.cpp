#include <iostream>
using namespace std;

int main()
{
	int n,sum=1,split;
	cin>>n;
	while(n!=0){
		split=n%10;
		sum=sum*split;
		n=n/10;
	}
	
	cout<<sum;
}
