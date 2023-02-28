#include<iostream>
#include<fstream>
using namespace std;
int main(){
    int num;
    fstream file;
    file.open("myfile.txt",ios::in);
    while(!file.eof()){
        file>>num;

    }
    file.close();
    cout<<"Number :"<<num;

}