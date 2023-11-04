#include<iostream>

using namespace std;
int main(){
    int arr[4]={12,13,14,15};
    int*p;
    p=arr;
    cout<<"the value of arr is "<<*p<<endl;
      cout<<"the value of arr is "<<*(p+1)<<endl;
        cout<<"the value of arr is "<<*(p+2)<<endl;
          cout<<"the value of arr is "<<*(p+3)<<endl;
    for(int i=0;i<4;i++){
      cout<<p[i]<<endl;}
   cout<<*(p);
          return 0;
}