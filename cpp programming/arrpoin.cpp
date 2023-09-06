#include<iostream>

using namespace std;
int main(){
    int i=0,n;
    cout<<"enter the size of array ";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cout<<"enter the elements ";
        cin>>arr[i];
    }
    int*p=arr;
    cout<<*(p++)<<endl;
    cout<<*(++p);
    return 0;
}