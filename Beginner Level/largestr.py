string1=str(input())
string2=str(input())
count1=0
count2=0
for i in string1:
      count1=count1+1
for j in string2:
      count2=count2+1
if(count1<count2):
      print(string2)
elif(count1==count2):
      print(string2)
else:
      print(string1)

      
      
      #include<iostream>
#include <string>
using namespace std;
int main ()
{
   string s;
   string k;
   int count1=0,count2=0;
   cin>>s>>k;
   for(int i=0;i<s.length();i++){
   	count1++;
   }
   for(int j=0;j<k.length();j++){
   	count2++;
   }
   if(count1>=count2){
   	cout<<s;
   }
   else{
   	cout<<k;
   }
   
}
