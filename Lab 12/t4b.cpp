#include<iostream>
#include<fstream>
using namespace std;
int main(){
    float deci;
    fstream file;
    file.open("myfile.txt",ios::in);
    while(!file.eof()){
        file>>deci;

    }
    file.close();
    cout<<"Number :"<<deci;

}