#include<iostream>

using namespace std;
int main(){
    int num,rem,sum=0;
    cout<<"enter a number ";
    cin>>num;
    int x=num;
    while(x>0 || sum>9){
        if(x==0){
            x=sum;
            sum=0;
        }
        rem=x%10;
        x=x/10;
        sum=sum+rem;
    }
    if(sum==1){
        cout<< num <<" is a magic number"<<endl;
    }
    else{
        cout<< num <<"is not a magic number"<<endl;
            }
            return 0;
}