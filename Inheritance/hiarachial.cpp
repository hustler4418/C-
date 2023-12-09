 #include<iostream>     // hiarachial inheriantce
using namespace std;
 
class vehicle{         // base class

    public :
     vehicle(){          // constructor
        cout<<"this is vehicle from base class"<<endl;
     }
};
class car : public vehicle{ // subclass 1
    public :
     car(){
        cout<<"this is car from subclass 1"<<endl;
     }
};
class bus : public vehicle { // subclass 2
    public :
     bus(){
        cout<<"this is bus class from 2nd subclass";
     }
};
int main(){
car c;
bus b;
}