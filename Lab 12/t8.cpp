#include<iostream>
#include<fstream>
using namespace std;
void check();
int main(){
  int n=5;
check();  
}
void check(){
    string line;
    int count=0;
    fstream file;
    file.open("story.txt",ios::in);
    while(!file.eof()){
       getline(file,line);
       if(line[0]!='T'){
        count++;
       }
    }
    file.close();
    cout<<"Total number of Lines :"<<count;
}