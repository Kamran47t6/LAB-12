#include<iostream>
#include<fstream>
using namespace std;
int main(){
    char name;
    int count=0;
    fstream file;
    file.open("myfile.txt",ios::in);
    while(!file.eof()){
        file>>name;
        count++;
    }
    file.close();
    cout<<"Total num of characters :"<<count;
    
    
}