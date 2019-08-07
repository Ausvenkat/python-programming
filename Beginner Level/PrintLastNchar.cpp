#include <iostream>
#include <string>
using namespace std;

int main() {
	string s,a;
	int n;
	cin>>s>>n;
	for(int i=s.length()-1;i>=0;i--){
		a+=s[i];
	}
	for(int i=0;i<n;i++){
		cout<<a[i];
	}
	return 0;
}
