#include<iostream>
using namespace std;
class cricketer{
    public:
    string name;
    int runs;
    float avg;
    cricketer(string name,int runs,int avg){
       this->name=name;
       this->runs=runs;
       this->avg=avg;
    }

    // void print(){
    //     cout<<name<<"  "<<runs<<endl;
    // }

    void print(){
        cout<<this->name<<"  "<<this->runs<<endl;
    }

    int matches(){
        return runs/avg;
    }
};
int main(){
cricketer c1("virat kohli",25000,55.2);
cricketer c2("rohit sharma",18000,48.6);

// cout<<c1.name<<" "<<c1.runs<<endl;
// cout<<c2.name<<" "<<c2.runs<<endl;

c1.print();
cout<<c1.matches();
}


 