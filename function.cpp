#include<iostream>
using namespace std;


void printname(string name ,string surname)
{
    cout<<"hello " <<name<<" " << surname <<" you are a future multimillioner";
}
int main()
{
string name;
string surname;
cout<< "please tell your good name sir ";
cin >> name;
cout<<"Also tell your Surname ";
cin >>surname;
printname(name,surname);
return 0;
}