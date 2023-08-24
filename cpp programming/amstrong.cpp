#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,num,rem,sum=0;
    cout<<"enter how many digit present in number ";
    cin>>n;
    cout<<"enter the number ";
    cin>>num;
    int x=num;
    while(x>=1){
        rem=x%10;
        sum=sum + pow(rem,n);
        x=x/10;
    }
    if(num==sum){
        cout<<num<<" is a amstrong number"<<endl;
    }
    else{
        cout<<num<<" is not a amstrong number"<<endl;
    }
    return 0;
}