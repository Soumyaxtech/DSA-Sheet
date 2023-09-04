#include<iostream>

using namespace std;
int main(){
    int i=0,n;
    cout<<"enter the size of array ";
    cin>>n;
    int arr[n];
    while(i<n){
        cout<<"enter the elements ";
        cin>>arr[i];
        i++;
    }
    i=0;
    while(i<n){
        cout<<"the value of array "<<i<<" is "<<arr[i]<<endl;
        i++;
    }
    return 0;
}