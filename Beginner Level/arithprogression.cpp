#include <iostream>
using namespace std;

int main() {
	int n,a,d,sum=0;
	int arr[n];
	cin>>n;
	cin>>a;
	cin>>d;
	for(int i=0;i<n;i++){
		if(i==0){
		arr[i]=a;
		}
		else if(i>0&&i<n){
			a=a+d;
			arr[i]=a;
		}
	}
	
	for(int j=0;j<n;j++){
		sum=sum+arr[j];
	}
	cout<<sum;
	return 0;
}
