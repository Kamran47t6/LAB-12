#include<iostream>
#include<fstream>
using namespace std;
int main(){
    int num=15;
    float deci=3.5;
    char letter='T';
    fstream file;
   string name="kamran";
   file.open("myfile.txt",ios::out);
   file<<num;
   cout<<endl;
   file<<deci;
   cout<<endl;
   file<<letter;
   cout<<endl;
   file.close();
    return 0;
}
string usernames[100];                   1.signupuser
string passwords[100];                  2. signin
                                        3. viewall
int usercount=0;                        
void signupuser(string usernames,string passwords);
void viewalluser();
void storeuser(string ...);
void loaduser();
bool isvalid(string usernames); 
void signin(string usernames,string passwords);

