#include<iostream>
#include<cstring>
#include<fstream>

using namespace std;
/*
1. fstreambase--
    ifstream --- derive from fstreambase
    ofstram---- derive from fstreambase*/

int main(){
    string st;

    ifstream in("samplewrite.txt");
   getline(in,st);
   cout<<st;
   
}