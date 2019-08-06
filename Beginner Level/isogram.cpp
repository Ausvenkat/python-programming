#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	int count=0;
	cin>>s;
	int l=s.length();
	for(int i=0;i<l;i++){
		if(s[i]!=s[i+1]){
			count++;
		}
		
	}
	if(count==l){
		cout<<"Yes";
	}
	else{
		cout<<"No";
	}
}
