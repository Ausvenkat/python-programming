#include <iostream>
#include <fstream>
using namespace std;
int main() 
{
	int a,b,c,count=0;
	cin>>a>>b;
	c=a*b;
	for(int i=1;i<=c;i++){
		if(c==i*i){
			count++;
		}
	}
    if(count>0 || c==0){
    	cout<<"yes";
    }
    else{
    	cout<<"no";
    }
    return 0;
}
