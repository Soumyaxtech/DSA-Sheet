#include<iostream>

using namespace std;
int main(){
    int i,j,k,n;
    char l;
    cout<<"enter the number of rows ";
    cin>>n;
    for(i=0;i<n;i++){
         l=65;
        for(k=0;k<=n-i-1;k++){
            cout<<l;
            l++;
        }
        for(j=0;j<2*i;j++){
            cout<<" ";
        }
        // l=65;
        // for(k=0;k<=n-i-1;k++){
        //     cout<<l;
        //     l++;
         cout<<endl;
        }
       
    
    return 0;
}