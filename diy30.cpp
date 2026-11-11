#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Student {
    string name;
    int marks;
};

int main() {
    // Write records
    ofstream out("students.txt");
    out << "Asha 85\nRahul 92\nMeera 78\n";
    out.close();

    // Read them back into an array
    ifstream in("students.txt");
    Student s[100];
    int n = 0;
    while (in >> s[n].name >> s[n].marks) n++;

    // Find the topper
    int top = 0;
    for (int i = 1; i < n; i++)
        if (s[i].marks > s[top].marks) top = i;

    cout << "Topper: " << s[top].name << " (" << s[top].marks << ")\n";
}