#include<iostream>
using namespace std;

int main(){
try{
    
    try{
        throw "error in inner block";
    }
    catch(const char *error){
        cout<<"exception handled in inner block ::"<<error<<endl;
        cout<<"rethorowing to outer block"<<endl;
         throw;
    }
   
}
catch(const char *e){
    cout<<"exception handled in outer block::"<<e<<endl;
}
catch(...){
cout<<"some error occured";
}}