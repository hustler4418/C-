#include<iostream>
using namespace std;
class Sample{
    int a,b;
    public :
     Sample(){
        a=0;
        b=0;
     }
     Sample(int x){
        a=x;
        b=0;
     }
     Sample(int x,int y){
        a=x;
        b=y;
     }
     Sample(Sample &s){
        a=s.a;
        b=s.b;
     }
};
int main(){
Sample s;
Sample t(4);
}