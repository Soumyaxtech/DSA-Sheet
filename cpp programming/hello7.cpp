#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"enter the age ";
    cin>>age;
    if(age<18){
        cout<<"you are not allowed in the party "<<endl;
    }
    else if(age==18){
        cout<<"you are going to get a kid pack "<<endl;
    }
    else{
        cout<<"you are allowed in the party ";

    }
    return 0;
}