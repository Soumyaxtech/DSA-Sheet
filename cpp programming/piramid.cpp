#include<iostream>

using namespace std;
int main(){
    int i,j,k,n,x;
    cout<<"enter the number of rows ";
    cin>>n;
    for(i=0;i<n;i++){
        for(j=0;j<2*(n-i)-1;j++){
            cout<<" ";
        }
        for(k=0;k<2*i+1;k++){
            x=k+1;
            cout<<x<<" " ;
        }
        cout<<endl;
    }
    
    return 0;
}