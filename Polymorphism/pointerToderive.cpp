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
    BaseClass *base_class_pointer;
    BaseClass base_obj;

    base_class_pointer ->var_base=45;
    base_class_pointer ->display();
 

   DerivedClass *derive_class_pointer;
   derive_class_pointer ->var_base=34;
   derive_class_pointer ->var_derived=90;
   derive_class_pointer ->display();
}