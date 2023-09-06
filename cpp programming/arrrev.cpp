#include<iostream>

using namespace std;
int main(){
    int i=0,n,temp;
    cout<<"enter length of array ";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cout<<"enter the elements ";
        cin>>arr[i];
    }
    // for(i=0;i<(n/2);i++){
    //     temp=arr[i];
    //     arr[i]=arr[n-i-1];
    //     arr[n-i-1]=temp;
    // }
    //  cout<<"the reverse array is ";
    // for(i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    for(i=n-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}