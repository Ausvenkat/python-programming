    
#include <iostream>
#include <fstream>
using namespace std;
int main() 
{
	int v,t,s=0;
 while (!cin.eof())
{
    cin >> v >>t;
    s++;
    if(s%2!=0){
    	cout<<v/t<<endl;
    }
    else{
    	cout<<v%t<<endl;
    }
} 
    
    return 0;
}
