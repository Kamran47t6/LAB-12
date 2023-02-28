#include<iostream>
#include<fstream>
using namespace std;
int main(){
    char ch;
    fstream file;
    file.open("myfile.txt",ios::in);
    file>>ch;  
    file.close();
    cout<<"Character :"<<ch;
 
}