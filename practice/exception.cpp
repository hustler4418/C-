#include<iostream>
#include<exception>
#include<stdexcept>
using namespace std;

int main(){
    try{
try {
    int a=5,b=0;
    if(b==0){
    throw runtime_error("divide by zeor");
    }
    int c=a/b;
    cout<<c;
}
catch(runtime_error &err){
    cout<<"error"<<err.what();
    throw;
}
    }
    catch(int err){
        cout<<err;
    }

}