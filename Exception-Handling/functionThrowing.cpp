// function throwing exception
 #include<iostream>
 #include<exception>
 #include<stdexcept>

 using namespace std;
 
 void exeption() throw(int,char,runtime_error){
  throw "divide by sdfjaksldjfasd";
 }

 int main(){
 try{
    exeption();
 }
 catch (const char *e){
    cout<<"error occured"<<e;
 }
 catch(int error){
    cout<<"integer error occured"<<error;
 }
 catch(char error){
    cout<<"character error occured"<<error;
 }
 catch(runtime_error &err){
    cout<<"runtime error"<<err.what();
 }
 catch(...){ // for any other type exception
    cout<<"some other exceptiion occured";  
 }
 }