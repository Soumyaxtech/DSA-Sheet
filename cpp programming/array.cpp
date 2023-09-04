#include<iostream>

using namespace std;
int main(){
    // int mark[4]={12,45,32,56};
    // // cout<<mark[0]<<endl;
    // // cout<<mark[1]<<endl;
    // // mark[2]=123;//you can change the value of array
    // // cout<<mark[2]<<endl;
    // // cout<<mark[3]<<endl;
    // for(int i=0;i<4;i++){
    //     cout<<"the values of mark "<<i <<" are "<<mark[i]<<endl;
    // }
    int i=0,n;
   cout<<"enter the length of array ";
    cin>>n;
    int arr[n];
    //cout<<"enter the elements ";
    for(i=0;i<n;i++){
        cout<<"enter the elements ";
        cin>>arr[i];
    }
      {for(i=0;i<n;i++) {
         cout<<"the values of arr[ "<<i <<" ]is "<<arr[i]<<endl;
    }
      }
    return 0;
}