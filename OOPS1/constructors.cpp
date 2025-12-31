#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int rno;
    float gpa;

    student(){}//default constructor

    student(string s,int r,float g){//parameterised constructor
        name=s;
        rno=r;
        gpa=g;
    } 

    student(string s,int r){//parameterised constructor
        name=s;
        rno=r;
       } 
};

int main(){
 student s1("kavay",54,8.2);
 student s2("himanshu",43,9);
  cout<<s1.name<<"  "<<s1.rno<<"  "<<s1.gpa<<endl;

  student s3;
  s3.name="njds";
  s3.rno=21;
  s3.gpa=9.0;

  student s4("ndsn",34);
  s4.gpa=7.8;
  cout<<s4.name<<"  "<<s4.rno<<"  "<<s4.gpa<<endl;


  student s6=s1;//deep copy
  
  student s7(s1);//copy constructor ->deep copy
  cout<<s7.name<<"  "<<s7.rno<<"  "<<s7.gpa<<endl;
}