#include<iostream>

using namespace std;
int main(){
    int a=3;
    int* b=&a;
    cout<<"the adress of a is "<<b<<endl;//using adress of operator &
     cout<<"the adress of a is "<<&a<<endl;
     cout<<"the value that store in pointer variable b is "<<*b<<endl;/* "*"is called dereference operator
                                             it shows value of operator*/
    return 0;
}
