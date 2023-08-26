#include<iostream>

using namespace std;
int main(){
    int num,rem;
    cout<<"enter the number ";
    cin>>num;
if(num>0){
    rem=num%10;
    cout<<"the last digit of the number is "<<rem<<endl;
}
    while(num>10){
        num=num/10;
    }
        cout<<"the first digit of the number is "<<num<<endl;

    return 0;
}