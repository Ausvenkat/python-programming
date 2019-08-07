try:
	def power(base,exp):
	     if(exp==1):
	          return(base)
	     if(exp!=1):
	          return(base*power(base,exp-1))
	base=int(input())
	exp=int(input())
	print(power(base,exp))
except:
  print("InvalidInput")



#include <iostream>
using namespace std;
int main() 
{
    int exponent;
    float base, result = 1;
    cin >> base >> exponent;
    while (exponent != 0) {
        result *= base;
        --exponent;
    }
    cout << result;
    
    return 0;
}
