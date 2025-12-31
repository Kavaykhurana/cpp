// #include<iostream>
// using namespace std;
// class Gun{
//     public:
//     int ammo;
//     int damage;
//     int scope;
// };
// class Helmet{
//     int hp;
//     int level;
 
//     public:
//     void setHp(int hp){
//      this->hp=hp;
//     }
 
//     void setLevel(int level){
//      this->level=level;
//     }
 
//     int getHp(){
//      return hp;
//     }
 
//     int getLevel(){
//      return level;
//     }
//  };


// class player{
// private:
// int health;
// int age;
// int scope;
// bool alive;
// Gun gun;
// Helmet helmet;



// public:
// int gethealth(){
//     return health;}

// int getage(){
//     return age;}

// int getscore(){
//     return scope;}

// int isalive(){
//     return alive; }

//     Gun getGun(){
//         return gun;
//     }

//     void sethealth(int health){
//         this->health=health; }

//      void setage(int age){
//         this->age=age;   }

//      void setscore(int score){
//         this->scope=scope; }

//      void setisalive(bool alive){
//         this->alive=alive; }

//     void setGun(Gun gun){
//     this->gun=gun;
//     }

//     void setHelmet(int level){
//         Helmet *helmet=new Helmet;
//         helmet->setLevel(level);
//         int health=0;
//         if(level==1) health=25;
//         else if (level==2) health=50;
//         else if(level==3) health=100;
//         else cout<<"error,invalid level!!";
//        helmet->setHp(health);  this->helmet=*helmet;
    
//     Helmet->setHp(health);
//     this->helmet=*helmet;
// }};
    
   

    
//      player getmaxscoreplayer(player a ,player b){
//             if(a.getscore()>b.getscore())
//             return  a; 
//             else return b;
//         }

//         int addscore(player a,player b){
//             return a.getscore()+b.getscore();
//         }
// int main(){

// player harsh;//object creation,statically
// player raghav;//compile time,static allocation

// player *urvi=new player; //run time,dynamic allocation
// player urviobject=*urvi;

// Gun akm;
// akm.ammo=100;
// akm.damage=50;
// akm.scope=2;


// harsh.setage(21);
// harsh.setscore(100);
// harsh.setisalive(true);
// harsh.sethealth(70);
// harsh.setGun(akm);
// harsh.setHelmet(2);


// Gun awm;
// awm.ammo=15;
// awm.damage=150;
// awm.scope=5;


// raghav.setage(221);
// raghav.setscore(120);
// raghav.setisalive(true);
// raghav.sethealth(250);
// raghav.setGun(awm);
// raghav.setHelmet(3);

// Gun gun123=harsh.getGun();
// cout<<gun123.damage<<endl;
// cout<<gun123.damage<<endl; 



// urviobject.setscore(40);
// urviobject.setage(18);

// (*urvi).sethealth(80);

// cout<<(*urvi).gethealth()<<endl;
// player sanket=getmaxscoreplayer(harsh,raghav);


// }


// #include <iostream>
// using namespace std;

// class Gun {
// public:
//     int ammo;
//     int damage;
//     int scope;
// };

// class Helmet {
//     int hp;
//     int level;

// public:
//     void setHp(int hp) {
//         this->hp = hp;
//     }

//     void setLevel(int level) {
//         this->level = level;
//     }

//     int getHp() {
//         return hp;
//     }

//     int getLevel() {
//         return level;
//     }
// };

// class player {
// private:
//     int health;
//     int age;
//     int scope;
//     bool alive;
//     Gun gun;
//     Helmet helmet;

// public:
//     int gethealth() {
//         return health;
//     }

//     int getage() {
//         return age;
//     }

//     int getscope() { // Fixed function name
//         return scope;
//     }

//     bool isalive() { // Fixed return type
//         return alive;
//     }

//     Gun getGun() {
//         return gun;
//     }

//     void sethealth(int health) {
//         this->health = health;
//     }

//     void setage(int age) {
//         this->age = age;
//     }

//     void setscore(int score) { // Fixed incorrect assignment
//         this->scope = score;
//     }

//     void setisalive(bool alive) {
//         this->alive = alive;
//     }

//     void setGun(Gun gun) {
//         this->gun = gun;
//     }

//     void setHelmet(int level) {
//         Helmet helmet; // Use stack allocation
//         helmet.setLevel(level);
//         int health = 0;
//         if (level == 1)
//             health = 25;
//         else if (level == 2)
//             health = 50;
//         else if (level == 3)
//             health = 100;
//         else {
//             cout << "Error, invalid level!!" << endl;
//             return;
//         }
//         helmet.setHp(health);
//         this->helmet = helmet;
//     }
// };

// // Fixed function to return reference
// player& getmaxscoreplayer(player &a, player &b) {
//     return (a.getscope() > b.getscope()) ? a : b;
// }

// int addscore(player &a, player &b) { // Passing by reference for efficiency
//     return a.getscope() + b.getscope();
// }

// int main() {
//     player harsh;
//     player raghav;

//     player *urvi = new player;
//     player urviobject = *urvi;

//     Gun akm;
//     akm.ammo = 100;
//     akm.damage = 50;
//     akm.scope = 2;

//     harsh.setage(21);
//     harsh.setscore(100);
//     harsh.setisalive(true);
//     harsh.sethealth(70);
//     harsh.setGun(akm);
//     harsh.setHelmet(2);

//     Gun awm;
//     awm.ammo = 15;
//     awm.damage = 150;
//     awm.scope = 5;

//     raghav.setage(22); // Fixed age from 221 to 22
//     raghav.setscore(120);
//     raghav.setisalive(true);
//     raghav.sethealth(250);
//     raghav.setGun(awm);
//     raghav.setHelmet(3);

//     Gun gun123 = harsh.getGun();
//     cout << gun123.damage << endl;

//     urviobject.setscore(40);
//     urviobject.setage(18);

//     urvi->sethealth(80);
//     cout << urvi->gethealth() << endl;

//     player &sanket = getmaxscoreplayer(harsh, raghav);
//     cout << "Player with max score has score: " << sanket.getscope() << endl;

//     delete urvi; // Free allocated memory
// }



#include <iostream>
#include <memory>

using namespace std;

class Gun {
public:
    int ammo, damage, scope;

    Gun(int ammo = 0, int damage = 0, int scope = 0) 
        : ammo(ammo), damage(damage), scope(scope) {}
};

class Helmet {
    int hp, level;

public:
    Helmet(int level = 0) { setLevel(level); }

    void setLevel(int level) {
        this->level = level;
        switch (level) {
            case 1: hp = 25; break;
            case 2: hp = 50; break;
            case 3: hp = 100; break;
            default: 
                cout << "Error: Invalid helmet level!" << endl;
                hp = 0;
        }
    }

    int getHp() const { return hp; }
    int getLevel() const { return level; }
};

class Player {
private:
    int health, age, scope;
    bool alive;
    Gun gun;
    Helmet helmet;

public:
    Player(int age = 0, int health = 100, int scope = 0, bool alive = true) 
        : age(age), health(health), scope(scope), alive(alive) {}

    int getHealth() const { return health; }
    int getAge() const { return age; }
    int getScope() const { return scope; }
    bool isAlive() const { return alive; }
    const Gun& getGun() const { return gun; }

    void setHealth(int health) { this->health = health; }
    void setAge(int age) { this->age = age; }
    void setScope(int scope) { this->scope = scope; }
    void setAlive(bool alive) { this->alive = alive; }
    void setGun(const Gun &gun) { this->gun = gun; }
    void setHelmet(int level) { this->helmet.setLevel(level); }
};

const Player& getMaxScorePlayer(const Player &a, const Player &b) {
    return (a.getScope() > b.getScope()) ? a : b;
}

int main() {
    Player harsh(21, 70, 100, true);
    Player raghav(22, 250, 120, true);

    unique_ptr<Player> urvi = make_unique<Player>(18, 80, 40, true);

    Gun akm(100, 50, 2);
    Gun awm(15, 150, 5);

    harsh.setGun(akm);
    harsh.setHelmet(2);

    raghav.setGun(awm);
    raghav.setHelmet(3);

    cout << "Gun Damage: " << harsh.getGun().damage << endl;
    cout << "Urvi Health: " << urvi->getHealth() << endl;

    const Player &sanket = getMaxScorePlayer(harsh, raghav);
    cout << "Player with max score has score: " << sanket.getScope() << endl;

    return 0; // Smart pointers automatically free memory
}
