#include<iostream>

using namespace std;
int main(){
    int a=0,b=1,c,n;
    cout<<"enter the value of n ";
    cin>>n;
    cout<<a<<endl;
    cout<<b<<endl;
for(int i=2;i<=n;i++){
    c=a+b;
    cout<<c<<endl;
    a=b;b=c;
}
return 0;
}