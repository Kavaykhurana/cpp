#include<iostream>
using namespace std;
class student{
    public://private
    int rno;
    string name;
   student(){};

   student(int rno,string name,float marks){
    this->rno=rno;
    this->name=name;
    this->marks=marks;
   }

   int getmarks(){//getter
    return marks;
   }

   void setmarks(int marks){//setter
    this->marks=marks;
   }


    private:
    float marks;
};
int main(){
student s1(76,"bona badmos",98);
cout<<s1.getmarks()<<" ";
student s2;
s2.rno=32;
s2.name="mota badmos";
s2.setmarks(24);
cout<<s2.getmarks();

}