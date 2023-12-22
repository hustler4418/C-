#include<iostream>
using namespace std;
class base{
    public :
     virtual void show()=0; //  purtr virtual functijon
                     // do nothing function.abstract class   
     
};

class derive :public base{
    public :
     void show(){
        cout<<"from derive class";
     }
};
int main(){
base *base_ptr;
derive d;
base_ptr=&d;
base_ptr->show();
}