// #include<iostream>
// using namespace std;

// class player {
// private:
//     int health;
//     int age;
//     int score;
//     bool alive;

// public:
//     // Getters
//     int gethealth() {
//         return health;
//     }

//     int getage() {
//         return age;
//     }

//     int getscore() {
//         return score;
//     }

//     bool isalive() {
//         return alive;
//     }

//     // Setters
//     void sethealth(int health) {
//         this->health = health;
//     }

//     void setage(int age) {
//         this->age = age;
//     }

//     void setscore(int score) {
//         this->score = score;
//     }

//     void setisalive(bool alive) {
//         this->alive = alive;
//     }

//     // Static Methods
//     static int addscore(player a, player b) {
//         return a.getscore() + b.getscore();
//     }

//     static player getmaxscoreplayer(player a, player b) {
//         if (a.getscore() > b.getscore())
//             return a;
//         else
//             return b;
//     }
// };

// int main() {
//     player harsh;
//     player raghav;

//     harsh.setage(21);
//     harsh.setscore(100);
//     harsh.setisalive(true);
//     harsh.sethealth(70);

//     raghav.setage(221);
//     raghav.setscore(120);
//     raghav.setisalive(true);
//     raghav.sethealth(250);

//     // Call static methods using the class name
//     cout << player::addscore(harsh, raghav) << endl;

//     player sanket = player::getmaxscoreplayer(harsh, raghav);
//     cout << sanket.getscore() << endl;
//     cout << sanket.gethealth() << endl;

//     return 0;
// }

#include<iostream>
using namespace std;
class player{
private:
int health;
int age;
int score;
bool alive;

public:
int gethealth(){
    return health;}

int getage(){
    return age;}

int getscore(){
    return score;}

int isalive(){
    return alive; }

    void sethealth(int health){
        this->health=health; }

     void setage(int age){
        this->age=age;   }

     void setscore(int score){
        this->score=score; }

     void setisalive(bool alive){
        this->alive=alive; }

        

    };
     player getmaxscoreplayer(player a ,player b){
            if(a.getscore()>b.getscore())
            return  a; 
            else return b;
        }

        int addscore(player a,player b){
            return a.getscore()+b.getscore();
        }
int main(){

player harsh;
player raghav;

harsh.setage(21);
harsh.setscore(100);
harsh.setisalive(true);
harsh.sethealth(70);

raghav.setage(221);
raghav.setscore(120);
raghav.setisalive(true);
raghav.sethealth(250);

cout<<addscore(harsh, raghav)<<endl;
player sanket=getmaxscoreplayer(harsh,raghav);
cout<<sanket.getscore()<<endl;
cout<<sanket.gethealth();



}