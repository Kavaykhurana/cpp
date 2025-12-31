#include<iostream>
using namespace std;
class player{
    private:
    int health;
    int score;

    public:
    void setscore(int a){
        score=a;
    }

    void sethealth(int b){
        health=b;
    }

    int getscore(){
        return score;
    }

    int gethealth(){
        return health;
    }
};

int main(){
player cos;
cos.sethealth(0);
cos.setscore(0);

cout<<cos.gethealth()<<endl;
cout<<cos.getscore()<<endl;
}