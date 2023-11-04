#include<iostream>

using namespace std;
int main(){
    int a=19;
    int &r=a;//here r is referance to a
    int b=34;
    r=b;//here b value assigned and store in r
    cout<<a<<endl;
    r++;
    cout<<r<<endl;
    
}