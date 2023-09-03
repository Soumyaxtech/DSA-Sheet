#include<iostream>

using namespace std;
int main(){
    int i,n;
    cout <<"enter the value of n ";
    cin>>n;
    for(i=1;i<=n;i++){
        // if(i==5){
        //     break;//it exist the loop
        // }
        if(i==8){
            continue;
            // cout<<i<<endl;
        }
        cout<<i<<endl;
    }
    return 0;
}