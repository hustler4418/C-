#include<iostream>
using namespace std;
class base1{
    public :
     void show(){

     }
};
class base2{
    public :
     void show(){

     }
};
class derive :public base1,base2{
    public :
     void show(){
        base1:show();
     }
};
int main(){

}