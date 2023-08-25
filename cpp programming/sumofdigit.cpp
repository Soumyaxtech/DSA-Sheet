#include<iostream>

using namespace std;
int main(){
    int i,num,rem,sum=0;
   cout<<"enter the number: ";
    cin>>num;
     int x=num;
while(x!=0){
    rem = x%10;
    x=x/10;
    sum=sum+rem;
}
cout<<"the sum of the digit is "<<sum<<endl;
return 0;
}