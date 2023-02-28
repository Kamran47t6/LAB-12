#include<iostream>
#include<fstream>
using namespace std;
string fname1[100];
string lname1[100];
float cgpa1[100];
string rollno1[50];
int studentcount=0;
void addstudent(string fname,string lname,float cgpa,string rollno);
int viewstudent();
void storestudent(string fname,string lname,float cgpa,string rollno);
void loadstudent();
main(){
    // loadstudent();
    string fname,lname;
    float cgpa;
    string rollno;
    int option;
    cout<<"ENter 1 to add student or enter 2 to view student :";
    cin>>option;
    if(option==1){
         cout<<"Enter first name :";
         cin>>fname;
         cout<<"ENter last name :";
         cin>>lname;
         cout<<"ENter CGpa :";
         cin>>cgpa;
         cout<<"ENter RollNo :";
         cin>>rollno;
        addstudent(fname,lname,cgpa,rollno);
    }
    else if(option==2){

        viewstudent();
    }
    return 0;
}
void addstudent(string fname,string lname,float cgpa,string rollno){
    fname[studentcount]=fname1;
    lname[studentcount]=lname1;
    cgpa[studentcount]=cgpa1;
    rollno[studentcount]=rollno1;
    studentcount++;

}
void storeStudent(string fname,string lname,float cgpa,string rollno){
    fstream file;
    file.open("student.txt",ios::app);
    file<<fname<<endl;
    file<<lname<<endl;
    file<<cgpa<<endl;
    file<<rollno<<endl;
    file.close();
    
}
int viewstudent(){
    cout<<"First name "<<"\t"<<"last name ";
   for(int idx=0;idx<studentcount;idx++){
        cout<<fname1[idx]<<"\t"<<lname1[idx]<<"\t"<<cgpa1[idx]<<"\t"<<rollno1[idx]<<endl;
   }
  
}
void loadstudent(){
   
    fstream file;
    file.open("student.txt",ios::in);
    while(!file.eof()){
        getline(file,fname1);
        getline(file,lname1);
        fname1[studentcount]=getline(file,line);
        lname1[studentcount]=getline(file,line);
        file>>cgpa1;
        rollno1=getline(file,line);
        cgpa1[studentcount]=cgpa1;
        rollno1[studentcount]=getline(file,line);
        studentcount++;
    }
    file.close();

}