#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	cin>>str;
	int i;
	int l = str.length();
	if ((str.length() % 2) == 0)
	{
		str[l/2]='*';
		str[(l/2)-1]='*';
	}
	if((str.length() %2) ==1)
	{
		str[(l/2)]='*';
	}
	for(i=0;i<l;i++){
		cout<<str[i];
		
	}
return 0;
}
