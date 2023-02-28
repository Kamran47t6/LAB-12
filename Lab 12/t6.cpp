#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string line;
    fstream file;
    file.open("myfile.txt",ios::in);
    while(!file.eof()){
        getline(file,line);
        cout<<line<<endl;
    }
    file.close();

}