#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int lastDigit = 0;
    int reverse = 0;
      while(n > 0) {
        lastDigit = n % 10;   // Get the last digit
        reverse = reverse * 10 + lastDigit; // Build the reversed number
        n /= 10;              // Remove the last digit from n
    }

    cout << "Reversed number: " << reverse << endl;
    
}
