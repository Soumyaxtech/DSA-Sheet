// #include<iostream>
// #include<cmath>
// using namespace std;
// int main(){
//     int n=2,cube;
//     cube=pow(2,3);
//     cout<<"the cube is "<<cube;
// }

#include<iostream>
#include<math.h>
using namespace std;
struct cube{
    int length;

};
int main(){
    struct cube c;
    cout<<"enter the length ";
    cin>>c.length;
    int x=c.length;
    cout <<"the volume of the cube is "<<(pow(x,3));
}

