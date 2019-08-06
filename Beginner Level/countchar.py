string=str(input())
char=0
word=1
for i in string:
      if(i!=' '):
           char=char+1      
print(char)



#include <iostream>
#include <string>
using namespace std;

int main() {
	int count=0;
	string s;
	getline(cin,s);
	for(int i=0;i<s.length();i++){
		if(s[i]!=' '){
			count++;
		}
	}
	cout<<count;
}
