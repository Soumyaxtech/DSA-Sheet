#include<iostream>
#include<iomanip>
//*************setw manupulator********************
using namespace std;
int main()
{
    int a=45, b=123, c=4563;
cout<<"the value of a without setw "<<a<<endl;
cout<<"the value of b without setw "<<b<<endl;
cout<<"the value of c without setw "<<c<<endl;
cout<<"the value of a with setw "<<setw(-4)<<a<<endl;
cout<<"the value of b with setw "<<setw(-4)<<b<<endl;
cout<<"the value of c with setw "<<setw(-4)<<c<<endl;
return 0;
}