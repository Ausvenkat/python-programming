#include <iostream>
using namespace std;

int main() {
  int o,n,temp;
  int a[o];
  cin>>n;
  for(int i=0;i<n;i++){
  	cin>>a[i];
  }
  for(int i=0;i<n;i++){
  	for(int j=i+1;j<n;j++){
  		if(a[i]>a[j]){
  			temp=a[i];
  			a[i]=a[j];
  			a[j]=temp;
  		}
  	}
  }
  n = (n+1) / 2 - 1;
  cout<<a[n];
}
