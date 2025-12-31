#include<iostream>
using namespace std;

class cricketer {
public:
    string name;
    int runs;
    float avg;
};

int main() {
    cricketer c1;
    c1.name = "Virat Kohli";
    c1.runs = 25000;
    c1.avg = 55.2;

    cricketer* c2 = new cricketer;
    c2->name = "Rohit Sharma";
    c2->runs = 18000;
    c2->avg = 48.0;

    cout << c1.name << " " << c1.runs << endl;
    cout << c2->name << " " << c2->runs << endl;

    // Free allocated memory
    delete c2;

    return 0;
}
