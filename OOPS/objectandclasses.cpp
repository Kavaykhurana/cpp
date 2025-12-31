// #include <iostream>
// using namespace std;

// class Player {
// public:
//     int score; // data members

//     int health;
// };

// int main() {
//     // ignore these lines
//     #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
//     #endif

//     Player amit;
//     amit.health = 100; // error: health is a private member of Player
//     amit.score = 90;

//     cout << amit.score << endl;
//     cout << amit.health << endl; // error: health is a private member of 'Player'

//     Player harsh;
//     harsh.score = 100;
//     harsh.health = 20; // error: 'health is a private member of 'Player'

//     cout << harsh.score << endl;
//     cout << harsh.health << endl; // error: 'health is a private member of 'Player'
// }


// #include <iostream>
// using namespace std;

// class Player {
// public:
//   int score; // data members
//   int health;

//   void showHealth() { // member function
//     cout << "Health is: " << health;
//   }
//   void showScore() {
//     cout << "Score: " << score;
//   }
// };

// int main() { // ignore these lines
// #ifndef ONLINE_JUDGE
//   freopen("input.txt", "r", stdin);
//   freopen("output.txt", "w", stdout);
// #endif

//   int score[100] = {};
//   int health[100] ={};

//   Player amit;
//   amit.score = 90;
//   amit.health = 100;

//   amit.showHealth();
//   amit.showScore();
// }



#include <iostream>
using namespace std;

class Player {  // Class name should start with uppercase for better readability
public:
    int score;
    int health;
};

int main() {
    Player players[10];  // Renamed array to avoid confusion

    Player amit;
    amit.score = 10;
    amit.health = 122;

    players[0] = amit;  // Now the assignment is correct

    cout << "Player 0 Score: " << players[0].score << endl;
    cout << "Player 0 Health: " << players[0].health << endl;

    return 0;
}
