#include<iostream>
using namespace std;

int main(){
    int x,y = x + 1;
    x++; y++;
    if((x^y) & (y^x))
        cout<<"anwesha"<<endl;
    else
        cout<<"disha"<<endl;
}
