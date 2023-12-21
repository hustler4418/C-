#include<iostream>
using namespace std;

int main(){
try{
    int a=3,b=0,c;
    if(b==0)
    throw runtime_error (" divide by 0");
    c=a/b;
    cout<<c;
}
catch(runtime_error &error){
    cout<<"error occured"<<error.what();
}
catch(...){                          // any other exception ,which is not in catch 
                                    // blocl then this catch will execut
    cout<<"some error occured";
}
}