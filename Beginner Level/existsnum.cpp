#include <iostream>
using namespace std;

int main() {
    int a,n,count=0;
    cin>>a>>n;
    int k[a];
    for(int i=0;i<a;i++){
    	cin>>k[i];
    }
    for(int i=0;i<a;i++){
    	if(k[i]==n){
    		count++;
    	}
    	
    }
    if(count>=1)
    	{
    		cout<<"yes";
    	}
    	else{
    		cout<<"no";
    	}
    
	return 0;
}
