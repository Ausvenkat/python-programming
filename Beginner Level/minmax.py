a = []
num = int(input())
for n in range(num):
    numbers = int(input())
    a.append(numbers)
print( max(a), min(a))


#include<iostream>
using namespace std;
int main ()
{
    int i,m,n;
    cin>>n;
    int arr[n];
    for (i = 0; i <n; i++)
        cin >> arr[i];
    m = arr[0];
    for (i = 0; i <n; i++)
    {
        if (m > arr[i])
            m = arr[i];
    }
    cout<<m<<' ';
    for (i = 0; i <n; i++)
    {
        if (m < arr[i])
            m = arr[i];
    }
    cout<<m;
        return 0;
}
