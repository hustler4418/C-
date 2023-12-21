#include<iostream>
#include<stdexcept>
using namespace std;

int main(){
try{
    throw 20;

}
catch(const char *e){       // below we have written multiple catch block 
                                  
    cout<<"error occured"<<e;// according to exception the specific catch block will execute                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           
} 
catch(int error){
    cout<<"integer error"<<error;                                                                                                                                
}                                                                                                                          
catch(runtime_error &err){
    cout<<err.what();
}
}