#include <iostream>
#include<string>
using namespace std;

int main() {
		string s;
		string a="";
		cin>>s;
		for(int i=s.length()-1; i>=0; i--){
		    a+=s[i];
		}
		if(s==a){
			cout<<"yes";
		}
		else{
			cout<<"no";
		}
	return 0;
}
