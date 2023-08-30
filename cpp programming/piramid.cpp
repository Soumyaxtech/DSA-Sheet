#include<iostream>

using namespace std;
int main(){
    int i,j,k,n;
    cout<<"enter the number of rows ";
    cin>>n;
    for(i=0;i<n;i++){
        for(j=0;j<2*(n-i)-1;j++){
            cout<<" ";
        }
        for(k=0;k<2*i+1;k++){
            cout<<"* ";
        }
        cout<<endl;
    }
    
    return 0;
}