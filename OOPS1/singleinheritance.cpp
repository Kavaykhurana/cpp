// #include<iostream>
// using namespace std;
// class scooty{//parent class
//     public:
//   int topspeed;
//   float mileage;
//   private:
//   int bootspace;
// };

// class bike : public scooty{//child class/derived class
//     public:
//    int gear;
// };
// int main(){
// bike b1;
// b1.gear=6;
// b1.mileage=24;
// b1.topspeed=120;
// //b1.bootspace=12;
// }

#include<iostream>
using namespace std;
class vehicle{
    public:
  int topspeed;
  float mileage;
  string fuel;
};

class car : public vehicle{
    public:
    bool sunroof;
};

class bike : public vehicle{
    public:
   int gear;
};

class truck : public vehicle{
    public:
   
};
int main(){
bike b1;
b1.gear=6;
b1.mileage=24;
b1.topspeed=120;
//b1.bootspace=12;
}