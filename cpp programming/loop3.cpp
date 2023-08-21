#include<iostream>
//sum of n number of natural number
using namespace std;
int main(){
    int i,n,sum=0;
    cout<<"enter the value of n: ";
    cin>>n;
for(i=1;i<=n;i++){
    sum=sum+i;
}
cout<<"the sum of n natural number is : "<<sum<<endl;
  return 0;
}