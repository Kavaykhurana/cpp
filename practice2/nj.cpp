#include <iostream>
#include <vector>

const int ROWS = 10; // Number of rows in the hospital layout
const int COLS = 10; // Number of columns

// 0 represents a free path, 1 represents an obstacle
std::vector<std::vector<int>> hospitalMap = {
    {0, 0, 1, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 1, 0, 1, 1, 1, 1, 1, 0},
    {0, 0, 0, 0, 1, 0, 0, 0, 0, 0},
    // Add more rows as needed to match ROWS
};

int main() {
    // Ensure we only print within the bounds of hospitalMap
    for (int i = 0; i < hospitalMap.size(); ++i) {
        for (int j = 0; j < hospitalMap[i].size(); ++j) {
            std::cout << hospitalMap[i][j] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}
