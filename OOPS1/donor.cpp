#include <iostream>
using namespace std;
class Donor {
private:
    string donor_name;
    double balance;

public:
    // Set donor details
    void set_details(const string& name, double amount) {
        donor_name = name;
        balance = amount;
    }

    // Display donor details
    void display() const {
        cout << "Donor Name: " << donor_name << ", Balance: $" << balance << endl;
    }

    // Get donor's balance
    double get_balance() const {
        return balance;
    }

    // Deduct donation amount if sufficient balance exists
    bool donate(double amount) {
        if (balance >= amount) {
            balance -= amount;
            return true;  // Success
        }
        return false;  // Insufficient balance
    }
};

class Recipient {
private:
    string recipient_name;
    double account_balance;
    double amount_required;

public:
    // Set recipient details
    void set_details(const string& name, double balance, double amount) {
        recipient_name = name;
        account_balance = balance;
        amount_required = amount;
    }

    // Display recipient details
    void display() const {
        cout << "Recipient Name: " << recipient_name 
             << ", Account Balance: $" << account_balance
             << ", Amount Required: $" << amount_required << endl;
    }

    // Get recipient's account balance
    double get_balance() const {
        return account_balance;
    }

    // Add received amount to recipient's balance
    void receive(double amount) {
        account_balance += amount;
    }
};

// Transfer function to handle the donation process
void transfer(Donor &donor, Recipient &recipient, double amount) {
    cout << "\nAttempting to transfer $" << amount << " from " << donor.get_balance() << "\n";

    if (donor.donate(amount)) {
        recipient.receive(amount);
        cout << "Transfer successful! $" << amount << " donated.\n";
    } else {
        cout << "Transfer failed: Insufficient balance.\n";
    }
}

int main() {
    // Create donor and recipient objects
    Donor donor;
    Recipient recipient;

    // Set donor and recipient details
    donor.set_details("John Doe", 100.0);
    recipient.set_details("Jane Smith", 50.0, 150.0);

    // Display initial details
    cout << "Before Transfer:" << endl;
    donor.display();
    recipient.display();

    // Perform donation transfer
    transfer(donor, recipient, 50.0);

    // Display details after transfer
    cout << "\nAfter Transfer:" << endl;
    donor.display();
    recipient.display();

    return 0;
}
