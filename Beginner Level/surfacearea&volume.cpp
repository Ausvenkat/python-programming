#include <iostream>
using namespace std;
int main()
{
  float length, width, height;
  float SA, Volume;
  cin>>length>>width>>height;

  SA = 2 * (length * width + length * height + width * height);
  Volume = length * width * height;
  cout<<SA<<' ';
  cout<<Volume;
  
  return 0;
}
