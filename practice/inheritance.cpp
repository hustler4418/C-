#include<iostream>
using namespace std;

class base{
    int a=5;
    public :
     int geta(){
        return a;
     }
};

class derive1 :virtual private base{
    int b=20;
    public :
     void add(int y){
        b=y;
        int ad=b+geta();
        cout<<"ad"<<ad;
     }
};

class derive2 :virtual public base{
    int c=10;
    public :
     void mul(){
        int aa=c*geta();
        cout<<"aa"<<aa;
     }
};

class hybrid :public derive1,public derive2{  // hybrid
};
int main(){
derive1 d1;
d1.add(4);
derive2 d2;
d2.mul();
}