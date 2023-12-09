#include<iostream>     // hybrid inheriantce
using namespace std;
 
class vehicle{         // base class 1

    public :
     vehicle(){          // constructor
        cout<<"this is vehicle from base class"<<endl;
     }
};
class fare{        // base class 2
    public :
     fare(){
        cout<<"give me fare"<<endl;
     }
};
class car : public vehicle{ // subclass 1 (hiarachial)
    public :
     car(){
        cout<<"this is car from subclass 1"<<endl;
     }
};
class bus : public vehicle,public fare { // subclass 2 (multiple )
    public :
     bus(){
        cout<<"this is bus class from 2nd subclass";
     }
};
int main(){
bus b;
}