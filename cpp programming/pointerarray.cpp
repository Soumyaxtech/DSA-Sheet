#include<iostream>

using namespace std;
int main(){
    int arr[]={12,13,14,15};
    int*p=arr;
    cout<<"the value of arr is "<<*p<<endl;
      cout<<"the value of arr is "<<*(p+1)<<endl;
        cout<<"the value of arr is "<<*(p+2)<<endl;
          cout<<"the value of arr is "<<*(p+3)<<endl;
    cout<<*p++<<endl;
    cout<<*(++p);
          return 0;
}