#include <iostream>
using namespace std;

int main()
{
	int a,d,n,sum=0;
	cin>>a>>d>>n;
	for (int i=0;i<n;i++) 
    { 
        sum = sum + a; 
        a = a + d; 
    } 
    cout<<sum;
}
