#include<iostream>

using namespace std;
int main(){
    int *p;
    p=new int[4];//here array elkements styored in heap memory
    p[0]=13;p[1]=14;p[2]=45;p[3]=15;
    for(int i=0;i<4;i++){
        cout<<p[i]<<endl;
    }
        delete []p;
}