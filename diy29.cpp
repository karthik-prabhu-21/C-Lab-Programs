#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream in("in.txt");
    ofstream out("out.txt");
    string line;
    int n = 1;
    while (getline(in, line))
        out << n++ << " " << line << "\n";
}