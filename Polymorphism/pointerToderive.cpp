#include<iostream>
using namespace std;
class BaseClass{
    public:
        int var_base;
        void display(){
            cout<<"Dispalying Base class variable var_base "<<var_base<<endl;
        }
};

class DerivedClass : public BaseClass{
    public:
            int var_derived;
            void display(){
                cout<<"Dispalying Base class variable var_base "<<var_base<<endl;
                cout<<"Dispalying Derived class variable var_derived "<<var_derived<<endl;
            }
};

int main(){
    BaseClass *base_class_pointer; // base class pointer
    BaseClass base_obj;            // base class object

   DerivedClass derive_obj;
   base_class_pointer=&derive_obj; // base class pointer pointing derive class object
   base_class_pointer->var_base=3453; /*as it is base class pointer
                                       base class display will execute*/
   base_class_pointer->display();    //   this will bind with base class function

   DerivedClass *derive_class_pointer; // derived classs pointer
   derive_class_pointer=&derive_obj;  
   derive_class_pointer->var_derived=23423;
   derive_class_pointer->display();  // this wil bind with derive class property
   
}