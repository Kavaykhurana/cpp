//multilevel inheritance
#include<iostream>
using namespace std;
class vehicle{
    public:
  int topspeed;
  float mileage;
  string fuel;
  
};

class twowheeler : public vehicle{
    public:

};

class fourwheeler : public vehicle{
    public:

};
class scooty : public twowheeler{
    public:

};

class bike : public twowheeler{
    public:

};
int main(){
bike b1;

b1.mileage=24;
b1.topspeed=120;
//b1.bootspace=12;
}