#include <iostream>
#include <string>
using namespace std;

int main() {
	string s,even,odd;
	cin>>s;
	for(int i=0;i<s.length();i++){
		if(i%2==0){
			odd+=s[i];
		}
		else{
			even+=s[i];
		}
	}
	cout<<odd<<' '<<even;
}
