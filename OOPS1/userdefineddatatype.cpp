// #include<iostream>
// using namespace std;
// class student{
//     public:
//     string name;
//     int rno;
//     float gpa;

// };

// void print(student s){
//     cout<<s.name<<" "<<s.rno<<" "<<s.gpa<<endl;
// }

// void change(student s){
//     s.name="naman";
// }

// int main(){
//  student s1;
//  s1.name="raghav garg";
//  s1.rno=76;//can take input too
//  s1.gpa=8.2;

//  student s2;
//  s2.name="himanshu garg";
//  s2.rno=65;
//  s2.gpa=9.2;

// //  cout<<s1.name<<"  "<<s1.rno<<"  "<<s1.gpa<<endl;
// //  cout<<s2.name<<"  "<<s2.rno<<"  "<<s2.gpa<<endl;
// print(s1);
// print(s2);
// }


#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int rno;
    float gpa;

};

void print(student s){
    cout<<s.name<<" "<<s.rno<<" "<<s.gpa<<endl;
}

void change(student &s){
    s.name="naman";
}

int main(){
 student s1;
 s1.name="raghav garg";
 s1.rno=76;//can take input too
 s1.gpa=8.2;

 cout<<s1.name<<endl;
 change(s1); 
 cout<<s1.name;
 

//  cout<<s1.name<<"  "<<s1.rno<<"  "<<s1.gpa<<endl;
//  cout<<s2.name<<"  "<<s2.rno<<"  "<<s2.gpa<<endl;


}