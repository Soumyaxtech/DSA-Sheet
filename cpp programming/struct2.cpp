#include<iostream>

using namespace std;
struct rectangle{
    int length;
    int breadth;
    char x;/*although char takes 1 byte ,compilar allocates 4 bytes for it
    only 1 byte is used among them*/
    float height;
};
struct rectangle r1;// r1 variable act as global variable here but if we right it in main function it acts as local variable
int main(){
    cout<<sizeof(r1)<<endl;
    r1.length=12;
    r1.breadth=8;
    cout<<"THE AREA WILL BE "<<r1.length*r1.breadth<<endl;
    return 0;
}