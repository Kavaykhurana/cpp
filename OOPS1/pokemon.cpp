#include<iostream>
using namespace std;
class pokemon{
    public:
    int hp;
    int attack;
    string name;
    string type;

    pokemon(int hp,int attack,string name,string type){
    this->hp=hp;
    this->attack=attack;
    this->name=name;
    this->type=type;
    }

void print(){
    cout<<name<<" "<<hp<<" "<<attack<<" "<<type<<endl;
}
};
int main(){
pokemon s1(100,500,"pikachu","electric");
s1.print();
}