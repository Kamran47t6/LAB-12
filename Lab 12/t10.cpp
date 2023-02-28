#include<iostream>
#include<fstream>
using namespace std;
string name;
int matric,fsc,age;
int main(){
    string line;
    fstream file;
    file.open("good.txt",ios::out);
    getline(file,line);
    file.close();
    cout<<line;

}void detail(){
      cout<<"Enter name :";
      cin>>name;
      cout<<"ENter matric marks :";
      cin>>matric;
      cout<<"Enter fsc marks :";
      cin>>fsc;
      cout<<"Enter age :";
      cin>>age;
}