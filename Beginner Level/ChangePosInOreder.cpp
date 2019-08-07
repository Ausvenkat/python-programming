#include <iostream>
using namespace std;

int main()
{
	int no;
	cin>>no;
	int a[no];
	for(int i=0;i<no;i++){
		cin>>a[i];
	}
	for(int i=0;i<no;i++){
		if(a[i]!=i+1){
			cout<<i;		
		}
	}
		
	
}
