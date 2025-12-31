// #include<iostream>
// using  namespace std;
// class book{
//     private:
//     string name;
//     int price;
//     int pages;

//     public:
//     void setname(string a){
//         name=a;   }

//     void setprice(int a){
//         price=a;   }

//     void setpages(int a){
//         pages=a;   }


//         void getpages(){
//         cout<<name;   }


//         void getprice(){
//         cout<<price;   }


//         void getname(){
//     cout<<name;   }


// };
// int main(){

// }


#include<iostream>
using namespace std;
class book{
    public:
    string name;
    int price;
    int pages;

   int countbooks(int p){
    if(price<p){
        return 1;
    }
    else return 0;
   }

   bool isbookpresent(string book){
    if(name==book){
        return true;
    }
    else return false;
   }
};
int main(){
    book harrypotter;
    harrypotter.pages=100;
    harrypotter.price=1000;
    harrypotter.name="H";

cout<<harrypotter.countbooks(1200)<<endl;//when price of the book is less than the given price
cout<<harrypotter.isbookpresent("H");

}