#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string line;
    int c=0;
    fstream file;
    file.open("myfile.txt",ios::in);
    getline(file,line);
    file.close();
    cout<<line;

}