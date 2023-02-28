#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string name;
    fstream file;
    file.open("example.txt",ios::in);
    file>>name;
    file.close();
    cout<<"Name :"<<name;
}