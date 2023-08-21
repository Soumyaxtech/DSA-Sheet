#include<iostream>
using namespace std;
//+++++++++++++ TYPE CASTING +++++++++++
/* CHANGE OF ONE DATA TYPE TO ANOTHER
MOSTLY FORM LOWER DATA TYPE TO HIGHER DATA TYPE*/
int main()
{
    int a = 45;
    float b =45.67;
    double c =50.345;
    cout<<"the value of a is "<<(double)a<<endl;
    cout<<"the value of b is "<<(int)b<<endl;
    cout<<"the value of c is "<<(int)c<<endl;
    float d=(int)b;
    cout<<"the value of d is "<<d<<endl;
    cout<<"the expresdsion will be "<< a+b+c<<endl;
    cout<<"the expresdsion will be "<< a+(int)b+(int)c<<endl;
    cout<<"the expresdsion will be "<< a+(int)b+c<<endl;
    cout<<"the expresdsion will be "<< a+b+(int)c<<endl;
      return 0;
}