#include<iostream>

using namespace std;
int main(){
    int num,rem,a=0,b=1;
    cout<<"enter the number ";
    cin>>num;
    while(num){
        rem=num%2;
        num=num/2;
        a=a+(b*rem);
        b=b*10;   
         }
         cout<<"the binary num is "<<a;
    return 0;
}