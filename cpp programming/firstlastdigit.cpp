#include<iostream>

using namespace std;
int main(){
    int num,rem,temp;
    cout<<"enter the number ";
    cin>>num;
if(num>=0){
    rem=num%10;
    cout<<"the last digit of the number is "<<rem<<endl;
}
        while(num>10){
        num=num/10;
    }
        cout<<"the first digit of the number is "<<num<<endl;
        cout<<"the sum of first and last digit of a number is "<<rem+num<<endl;
        cout<<"the multiple of first and last digit of a number is "<<rem*num<<endl;
        //swapping useing 3rd variable
        temp=num;
        num=rem;
        rem=temp;
        cout<<"after swapping the value of first digit is "<<num<<endl;
        cout<<"after swapping the value of last digit is "<<rem<<endl;
        //swapping withoutn 3rd variable
        num=num+rem;
        rem=num-rem;
        num=num-rem;
        cout<<"after swapping the value of first digit is "<<num<<endl;
        cout<<"after swapping the value of last digit is "<<rem<<endl;
        
    return 0;
}