#include<iostream>

using namespace std;
int main(){
    int i,num,mul;
    cout<<"enter the number ";
    cin>>num;
    for(i=1;i<=10;i++){
        mul=num*i;
        cout<<num<< "*" <<i<<" = "<<mul<<endl;
    }
    return 0;
}