// #include<iostream>
// //accussing array element from heap memory by pointer
// using namespace std;
// int main(){
//     int *p;
//     p=new int[4];//here array elkements styored in heap memory
//     p[0]=13;p[1]=14;p[2]=45;p[3]=15;
//     for(int i=0;i<4;i++){
//         cout<<p[i]<<endl;
//     }
  
  


//pointer size is independent of its datatypes
#include<iostream>

using namespace std;
struct rectangle{
    int length;
    int breadth;
};
int main(){
    int *p;
    float*p1;
    char *p2;
    double *p3;
    struct rectangle *p4;
    cout << sizeof(p)<<endl;
     cout << sizeof(p1)<<endl;
      cout << sizeof(p2)<<endl;
       cout << sizeof(p3)<<endl;
        cout << sizeof(p4)<<endl;

return 0;
}