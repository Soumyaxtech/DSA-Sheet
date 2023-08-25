#include<iostream>

using namespace std;
int main(){
    int num,rem,sum=0;
    cout<<"enter a number ";
    cin>>num;
    int x=num;
    while(x>0){
        rem=x%10;
        x=x/10;
        sum=sum*10+rem;
    }
    cout<<"the reverse of number "<<num<<" is "<<sum<<endl;
    return 0;
}