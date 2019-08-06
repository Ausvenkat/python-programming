#include <iostream>
#include <string>
using namespace std;
int main()
{
   string s;
   cin>>s;
   for(int i=0;i<s.length();i++){
   	for(int j=i+1;j<s.length();j++){
   		if(s[i]>s[j]){
   		int	temp=s[i];
   			s[i]=s[j];
   			s[j]=temp;
   		}
   	}
   }
   for(int i=0;i<s.length();i++){
   	cout<<s[i];
   }
    return 0;
}
