#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string line;
    int c=0;
    fstream file;
    file.open("myfile.txt",ios::in);
    while(!file.eof()){
        getline(file,line);
        cout<<line<<endl;
        c++;
    }
    file.close();
    cout<<"Total number of lines :"<<c;

}