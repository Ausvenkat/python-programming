#include <iostream>
#include<string>
using namespace std;

int main() {
	int count=0;
	string s;
	cin>>s;
	for(int i=0;i<=s.length();i++)
	{
		if(s[i]=='\0')
		{
			count++;
		}
		
	}
	cout<<count;
	return 0;
}
