// #include<iostream>
// #include<cmath>
// using namespace std;
// int main(){
//     int n,d,rem,sum=0;
//     cout<<"enter num of digit in number ";
//     cin>>d;
//     cout<<"enter the number ";
//     cin>>n;
//     int x=n;

//     while(x>0){
//         rem=x%10;
//         sum=sum+pow(rem,d);
//        x=x/10;

//     }
//     if(sum==n){
//         cout<<"the number is a amstrong number ";
//     }
//     else{
//         cout<<"the number is not a amstrong number ";
//     }
//     return 0;
// }
// #include<iostream>

// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the size of array ";
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cout<<"enter the elements ";
//         cin>>arr[i];
//     }

//     for(int i=n-1;i>=0;i--){
//         cout<<"the value of  reversen array is "<<arr[i]<<endl; 
//     }
//     return 0;
// }
// #include<iostream>

// using namespace std;
// int main(){
//     int rem,num,a=0,b=1;
//     cout<<"enter the number ";
//     cin>>num;
//     while(num>0){
//         rem=num%2;
//         num=num/2;
//         a=a+(b*rem);
//         b=b*10;
//     }
//     cout<<"the binary form of the decimal number is "<<a;
//     return 0;
// }
#include<iostream>

using namespace std;
int main(){
    int i,n,j;
    cout<<"enter the num of rows ";
    cin>>n;
    for(i=0;i<n;i++){
        for(int k=0;k<=i;k++){
            cout<<"*";
        }
        for(j=(n-1);j>i;j--){
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}