#include <iostream>
using namespace std;

// Function to print and count prime factors
int primeFactorization(int n) {
    int count = 0;

    cout << "Prime factors: ";

    // Count the number of times 2 divides n
    while (n % 2 == 0) {
        cout << 2 << " ";
        count++;
        n /= 2;
    }

    // Check for odd factors from 3 onwards
    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            cout << i << " ";
            count++;
            n /= i;
        }
    }

    // If n is still greater than 2, it must be a prime number
    if (n > 2) {
        cout << n << " ";
        count++;
    }

    cout << endl;
    return count;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int totalFactors = primeFactorization(num);
    cout << "Total number of prime factors: " << totalFactors << endl;

    return 0;
}
