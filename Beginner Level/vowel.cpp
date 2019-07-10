#include <iostream>
#include<string>
using namespace std;

int main() {
	string s;
	int count;
	cin>>s;
	for(int i=0;i<s.length();i++){
		if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
			count++;			
		}
	}
	if(count>=1){
		cout<<"yes";
	}
	else{
		cout<<"no";
	}
	return 0;
}
