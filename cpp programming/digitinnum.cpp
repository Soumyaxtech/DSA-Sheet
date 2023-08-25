#include<iostream>

using namespace std;
int main(){
    int num,count=0;
    cout<<"enter a number ";
    cin>>num;
    int x=num;
    while(x>0){
        x=x/10;
        count++;
    }
    cout<<"the number of digit in "<<num<<" is "<<count<<endl;
    return 0;
}