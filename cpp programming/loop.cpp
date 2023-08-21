#include<iostream>

using namespace std;
int main(){
int i=1,n,flag=0;
cout<<"enter the value of n";
cin>>n;
// while(i<=n){
//     if (i%2==0)
//         cout<<i<<endl;
//         i++;
// }
// for(i=1;i<=n;i++){
//     if(i%2 !=0)
//     cout<<i<<endl;
// }
// prime number code
for(i=2;i<n;i++){
    if(n%i==0){
        flag++;
        break;
    }
}
if(flag>0)
    cout<<"the number is not a prime number"<<endl;
else
    cout<<"the number is a prime number";
return 0;
}
