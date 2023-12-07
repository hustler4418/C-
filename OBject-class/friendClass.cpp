#include<iostream>
using namespace std;

 class complex; // forward declaration

class calculator{
    public :
     void sumRealcomplex(complex,complex);
     void sumComcomplex(complex,complex);
};

class complex{
    int a,b;
    // friend void calculator::sumRealcomplex(complex,complex);
    // friend void calculator::sumComcomplex(complex,complex);
    // instead giving each function persmission separately ,
    // we make entire class frind
    friend class calculator;
    public :
     void setdata(int a1,int b1){
        a=a1;
        b=b1;
     }
};

void calculator ::sumRealcomplex(complex o1,complex o2){
    cout<<"sum of real value"<<o1.a+o2.a;
}
void calculator ::sumComcomplex(complex o1,complex o2){
    cout<<"sum of imaginary part"<<o1.b+o2.b;
}
int main(){
complex c1,c2;
c1.setdata(2,3);
c2.setdata(4,5);
calculator cal;
cal.sumRealcomplex(c1,c2);
cal.sumComcomplex(c1,c2);
}