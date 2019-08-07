#include <iostream>
using namespace std;

int main() {
	int n,k=2;
	cin>>n;
	for(int i=1; i<10; i++){
		if(i%2==0){
			n=n+k;
			cout<<n<<' ';
			}
			else{
				n=n*k;
				cout<<n<<" ";
			}
			k=k+2;
	}
	return 0;
}


Output: 2 6 36 44 440 452 6328 6344 114192
