#include <iostream>
using namespace std;
class Triangle {
private:
    int base;
    int height;

public:
    Triangle(int base,int height) {
        this->base = base;
        this->height = height;
    }

    void setBase(int base){ this->base = base;}
    void setHeight(int height){ this->height = height;}
    int getBase() { return base;}
    int getHeight() { return height;}

    int getArea() { // Correctly calculating area
        return (base * height) / 2;
    }
};

int CompareArea(Triangle* a, Triangle* b) {
    return max(a->getArea(), b->getArea());
}

int main() {
    Triangle a(2, 4);
    Triangle b(4, 8);

    cout << "Larger Area: " << CompareArea(&a, &b) << endl;

    return 0;
}