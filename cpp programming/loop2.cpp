#include<iostream>
// printing prime number from n natural number
using namespace std;
int main(){
    int i,j,n,flag=0;
   cout<<"enter the value of n";
   cin>>n;
    for(i=1;i<=n;i++){
        flag=0;
        for(j=2;j<i;j++){
            if(i%j==0){
                flag++;
                break;}
        }
       if(flag==0 && i!=1) {
        cout<<i<<endl;
       
       }
    }
    
    return 0;
}