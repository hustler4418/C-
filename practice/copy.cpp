#include<iostream>
using namespace std;


class ritam{
    int a,b;
    public :
     ritam(){
        a=0,b=0;
     }
     ritam(int x,int y){
    a=x;
    b=y;
     }
     ritam(ritam o1,ritam o2){  // copy constructor 
        a=o1.a;
        b=o2.a;
     }
     void show();
};

void ritam :: show(){
    cout<<a<<"dkfjas"<<b<<endl;
}
int main(){
ritam rot(4,5);
ritam rit(rot);
rit.show();
}