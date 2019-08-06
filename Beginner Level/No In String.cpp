#include <iostream>
using namespace std;

int main() {
	string k;
	cin>>k;
	for(int i=0;i<k.length();i++)
	{
		if(k[i]>='0' && k[i]<='9'){
			
			cout<<k[i];
		}
	}
	return 0;
}
