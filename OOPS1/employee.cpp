#include<iostream>
#include<algorithm>
using namespace std;
class employee{
    public:
    string name;
    int Id;
    int salary;

    employee(){};

    employee(string name,int Id,int salary){
        this->name=name;
        this->Id=Id;
        this->salary=salary;
    }
};

void display(employee a){
    cout<<a.name<<" "<<a.Id<<" "<<a.salary<<endl;}

void averagesalary(employee a,employee b,employee c,employee d,employee e){
    cout<<"Average="<<((a.salary + b.salary + c.salary + d.salary + e.salary)/5)<<endl ;}

void maxsalary(employee a,employee b,employee c,employee d,employee e){
    int Max=max(a.salary,max(b.salary,max(c.salary,max(d.salary,e.salary))));
    cout<<"Max="<<Max<<endl;

    if(a.salary=Max) cout<<"a";
    else if(b.salary=Max) cout<<"b";
    else if(c.salary=Max) cout<<"c";
    else if(d.salary=Max) cout<<"d";
    else cout<<"e";

}

int main(){
employee a("a",1,100);
employee b("b",2,200);
employee c("c",3,300);
employee d("d",4,400);
employee e("e",5,500);

display(a);
display(b);
display(c);
display(d);
display(e);

averagesalary(a,b,c,d,e);
maxsalary(a,b,c,d,e);


}