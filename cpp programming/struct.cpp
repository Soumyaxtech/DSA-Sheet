#include<iostream>

using namespace std;
typedef struct employ
{
    int id;
    float salary;
    char favchar;
}ep;
int main(){
    // struct employ
     ep babai;
    babai.id=12356;
    babai.salary=56900.67;
    babai.favchar='A';
    cout<<"the id of employ babai is "<<babai.id<<endl;
    cout<<"the salary of employ babai is "<<babai.salary<<endl;
    cout<<"the favchar of employ babai is "<<babai.favchar<<endl;
    return 0;
}