#include<iostream>
using namespace std;


// void printname(string name ,string surname)
// {
//     cout<<"hello " <<name<<" " << surname <<" you are a future multimillioner";
// }
void result(int value1 , int value2)
{
   int result = value1 + value2;
   cout<<"the sum is "<<result<<endl;
}
void result1(int value1 , int value2)
{
   int result = value1 - value2;
   cout<<"the difference is "<<result<<endl;
}
void result2(int value1 , int value2)
{
   int result = value1 * value2;
   cout<<"the product is "<<result<<endl;
}
void result3(int value1 , int value2)
{
   int result = value1 / value2;
   cout<<"the division is "<<result<<endl;
}
int main()
{
// string name;
// string surname;
// cout<< "please tell your good name sir ";
// cin >> name;
// cout<<"Also tell your Surname ";
// cin >>surname;
// printname(name,surname);

int value1,value2;
cout<<"there you need to enter two value please enter it ";
cin>>value1>>value2;
result(value1,value2);
result1(value1,value2);
result2(value1,value2);
result3(value1,value2);
return 0;
}