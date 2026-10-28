#include <iostream>
using namespace std;

class Employee {
protected:
    string name;
    int id;

public:
    Employee(string n, int i) {
        name = n;
        id = i;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
    }
};

class Manager : public Employee {
    int teamSize;

public:
    Manager(string n, int i, int t) : Employee(n, i) {
        teamSize = t;
    }

    void display() {
        Employee::display();
        cout << "Team Size: " << teamSize << endl;
    }
};

class Engineer : public Employee {
    string skill;

public:
    Engineer(string n, int i, string s) : Employee(n, i) {
        skill = s;
    }

    void display() {
        Employee::display();
        cout << "Skill: " << skill << endl;
    }
};

int main() {
    Manager m("Rahul", 101, 8);
    Engineer e("Priya", 102, "VLSI Design");

    cout << "Manager Details:\n";
    m.display();

    cout << "\nEngineer Details:\n";
    e.display();

    return 0;
}