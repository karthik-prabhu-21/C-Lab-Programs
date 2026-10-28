#include <iostream>
using namespace std;

class Person {
public:
    string name;

    Person(string n) {
        name = n;
        cout << "Person constructor called" << endl;
    }

    void displayPerson() {
        cout << "Name: " << name << endl;
    }
};

class Student : virtual public Person {
public:
    int rollNo;

    Student(string n, int r) : Person(n) {
        rollNo = r;
        cout << "Student constructor called" << endl;
    }
};

class Employee : virtual public Person {
public:
    int empId;

    Employee(string n, int e) : Person(n) {
        empId = e;
        cout << "Employee constructor called" << endl;
    }
};

class TA : public Student, public Employee {
public:
    TA(string n, int r, int e)
        : Person(n), Student(n, r), Employee(n, e) {
        cout << "TA constructor called" << endl;
    }

    void display() {
        displayPerson();
        cout << "Roll Number: " << rollNo << endl;
        cout << "Employee ID: " << empId << endl;
    }
};

int main() {
    TA t("Maddy", 21, 501);

    cout << "\nTeaching Assistant Details:\n";
    t.display();

    return 0;
}