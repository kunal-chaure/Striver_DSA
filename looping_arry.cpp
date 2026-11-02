#include<iostream>
using namespace std;
int main()
{
 int sum = 0 ;
 int mul = 1;
    int a[5] ={1,2,3,4,5};
    for (int i = 0; i <= 4; i++){
        cout << a[i];
        sum = sum + a[i];
        mul = mul * a[i];
    }
    cout<<endl <<sum<<endl;
    cout<<endl <<mul<<endl;
    return 0;
// so perfectly we have learned about using loops in array

}