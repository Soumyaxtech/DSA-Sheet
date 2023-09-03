#include<iostream>

using namespace std;
int main(){
    int a=3;
    int* b=&a;
    cout<<"the adress of a is "<<b<<endl;//using adress of operator &
     cout<<"the adress of a is "<<&a<<endl;
     cout<<"the value that store in pointer variable b is "<<*b<<endl;/* "*"is called dereference operator
                                             it shows value of operator*/
    int** c=&b;//pointer to pointer(store adress of a pointer)   
      cout<<"the adress of pointer b is "<<c<<endl;  
      cout<<"the adress of pointer b is "<<&b<<endl;  
      cout<<"the value at adress value_at(value at_c) "<<**c<<endl;                                
    return 0;
}
