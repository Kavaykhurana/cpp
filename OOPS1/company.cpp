#include <iostream>
using namespace std;
// Base Class
class Company {
protected:
    string company_name;
    string location;

public:
    Company(string cname, string loc) : company_name(cname), location(loc) {}
    void displayCompany() {
        cout << "Company Name: " << company_name << "\nLocation: " << location << endl;
    }
};

// Intermediate Class inheriting from Company
class Team : public Company {
protected:
    string team_name;
    string project;

public:
    Team(string cname, string loc, string tname, string proj) 
        : Company(cname, loc), team_name(tname), project(proj) {}
    void displayTeam() {
        cout << "Team Name: " << team_name << "\nProject: " << project << endl;
    }
};

// Derived Class inheriting from Team
class Developer : public Team {
private:
    string developer_name;
    string programming_language;

public:
    Developer(string cname, string loc, string tname, string proj, string dname, string plang) 
        : Team(cname, loc, tname, proj), developer_name(dname), programming_language(plang) {}
    
    void displayDeveloper() {
        displayCompany(); // Display details from Company class
        displayTeam();    // Display details from Team class
        cout << "Developer Name: " << developer_name << "\nProgramming Language: " << programming_language << endl;
    }
};

int main() {
    // Creating an object of Developer class
    Developer dev("TechCorp", "New York", "AI Team", "Chatbot Development", "Alice Smith", "C++");
    
    // Displaying all details
    dev.displayDeveloper();
    
  
}
