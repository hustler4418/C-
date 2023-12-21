#include<iostream>
#include<cstring>
#include<fstream>

using namespace std;
/*
1. fstreambase--
    ifstream --- derive from fstreambase
    ofstram---- derive from fstreambase*/

int main(){
    string st="Ritam you are hustler";

    ofstream out("samplewrite.txt");
    out<<st;
     
}