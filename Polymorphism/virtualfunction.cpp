#include<iostream>
using namespace std;
class BaseClass{
    public:
        int var_base=5;
        virtual void display(){ // we make this function virtual
            cout<<"Dispalying Base class variable var_base "<<var_base<<endl;
        }
};

class DerivedClass : public BaseClass{
    public:
            int var_derived=99;
            void display(){
                cout<<"Dispalying Derived class variable var_derived "<<var_derived<<endl;
            }
};

int main(){
    BaseClass *base_class_pointer; // base class pointer
    BaseClass base_obj;            // base class object

    DerivedClass derive_obj;      // derive class object

    base_class_pointer=&derive_obj;   // as we make this base class function virtual l
                                     // so where the pointer will point this function will execute
                                     

    base_class_pointer->display();
   
   
}