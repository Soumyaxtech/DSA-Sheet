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
    sum=sum*10+rem;
}
if(num==sum)
    cout<<"palindrome number"<<endl;
else
    cout<<"not palindrome number";
    return 0;
}