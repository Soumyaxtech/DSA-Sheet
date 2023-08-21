#include<iostream>
using namespace std;
//*************REFERANCE VARIABLE******************
/*its like same person is called by diff names in house.
soumyajit -----> soumya -----> babai*/
int main()
{
    int a=345;
    int & b=a;
    cout<<"the value of  a is "<<a<<endl;
    cout<<"the value of b is "<<b;
    return 0;
}