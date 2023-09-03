#include<iostream>

using namespace std;
int main(){
    int i=1,num,mul;
    cout<<"enter the number ";
    cin>>num;
    // for(i=1;i<=10;i++){
    //     mul=num*i;
    //     cout<<num<< "*" <<i<<" = "<<mul<<endl;
    // }
    do{
        mul=num*i;
        cout<<num<<"*"<<i<<"="<<mul<<endl;
         i++;
    }
    while( i<=10);
    return 0;
}