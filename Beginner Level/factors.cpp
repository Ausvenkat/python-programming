#include <iostream>
#include <string>
using namespace std;

int main() {
	int n,a;
	cin>>n;
	for(int i=1;i<=n;i++){
	
		if(n%i==0){
			cout<<i<<" ";
		}
	}
return 0;
}
