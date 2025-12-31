#include<iostream>
using namespace std;
class cricketer{
    public:
    string name;
    int runs;
    float avg;
    cricketer(string name,int runs,float avg){
       this->name=name;
       this->runs=runs;
       this->avg=avg;
    }
};
int main(){
cricketer c1("virat kohli",25000,55.2);
cricketer* c2= new cricketer("rohit sharma",18000,48);

cout<<c1.name<<" "<<c1.runs<<endl;
cout<<c2->name<<" "<<c2->runs<<endl;
}
