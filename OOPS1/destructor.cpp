#include <iostream>
using namespace std;
class Bike {
private:
    int tyreSize;
    int engineSize;

public:
    // Parameterized constructor with default engine size
    Bike(int tyreSize, int engineSize = 200) {
        this->tyreSize = tyreSize;
        this->engineSize = engineSize;
    }

    // Getter functions
    int getTyreSize() {
        return tyreSize;
    }

    int getEngineSize() {
        return engineSize;
    }

    // Destructor
    ~Bike() {
        cout << "Destructor called for Bike with tyre size: " << tyreSize << " and engine size: " << engineSize << endl;
    }
};

int main() {
    // Correct object creation
    Bike tvs(12, 100);
    Bike honda(13, 150);
    Bike royalEnfield(15, 350);
    Bike bajaj(13); // Uses default engine size (200)

    // Printing values using getter methods
    cout << "TVS: " << tvs.getTyreSize() << " " << tvs.getEngineSize() << endl;
    cout << "Honda: " << honda.getTyreSize() << " " << honda.getEngineSize() << endl;
    cout << "Royal Enfield: " << royalEnfield.getTyreSize() << " " << royalEnfield.getEngineSize() << endl;
    cout << "Bajaj: " << bajaj.getTyreSize() << " " << bajaj.getEngineSize() << endl;

    return 0;
}

                         
    
    