#include <iostream>
using namespace std;

int main() {
	string s;
	int count=0;
	cin>>s;
	for(int i=0;i<s.length();i++){
		if(s[i]=='.' || (s[i]>='0'&& s[i]<='9') ){
			count++;
		}
		
	}
	if(count==s.length()){
		cout<<"Yes";
	}	else{
		cout<<"No";
	}

}
