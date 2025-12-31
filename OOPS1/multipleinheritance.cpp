#include<iostream>
using namespace std;
class cricketer{
public:
int runs;
int wickets;
int average;
};
class engineer{
    public:
    int experience;
    string domain;

};
class phodu:public engineer,cricketer{//multiple inheritance
   public:
   string name;
   

};
int main(){

}