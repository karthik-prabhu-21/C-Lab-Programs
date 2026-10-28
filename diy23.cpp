#include <iostream>
#include <fstream>
#include <memory>
using namespace std;

class Logger {
public:
    virtual void write(string message) = 0;

    virtual ~Logger() {}
};

class ConsoleLogger : public Logger {
public:
    void write(string message) override {
        cout << "Console: " << message << endl;
    }
};

class FileLogger : public Logger {
public:
    void write(string message) override {
        ofstream file("log.txt", ios::app);

        if (file.is_open()) {
            file << message << endl;
            file.close();
        } else {
            cerr << "Unable to open file!" << endl;
        }
    }
};

int main() {
    unique_ptr<Logger> logger;

    int choice;
    cout << "1. Console Logger\n2. File Logger\n";
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1) {
        logger = make_unique<ConsoleLogger>();
    } else if (choice == 2) {
        logger = make_unique<FileLogger>();
    } else {
        cout << "Invalid choice!" << endl;
        return 0;
    }

    logger->write("Program started");

    return 0;
}