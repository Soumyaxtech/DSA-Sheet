#include<iostream>

using namespace std;
// typedef struct employ
// {
//     int id;
//     float salary;
//     char favchar;
// }ep;

union money
{
    int rice;  //4
    float car;  //1              //only one among this three we can use at a time
    char pounds;  //4   // better memory management in union than struct
};

int main(){
    union money m1;
    m1.rice=34;
    m1.car=23.7;
    cout<<m1.car;
}