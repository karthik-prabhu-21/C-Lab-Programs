#include <iostream>
using namespace std;

class Matrix {
private:
    int rows;
    int cols;
    int **data;

public:
    // Constructor
    Matrix(int m, int n) {
        rows = m;
        cols = n;

        data = new int*[rows];

        for (int i = 0; i < rows; i++) {
            data[i] = new int[cols];
        }
    }

    // Copy constructor - deep copy
    Matrix(const Matrix& other) {
        rows = other.rows;
        cols = other.cols;

        data = new int*[rows];

        for (int i = 0; i < rows; i++) {
            data[i] = new int[cols];

            for (int j = 0; j < cols; j++) {
                data[i][j] = other.data[i][j];
            }
        }
    }

    void set(int i, int j, int value) {
        data[i][j] = value;
    }

    void display() {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << data[i][j] << " ";
            }
            cout << endl;
        }
    }

    // Destructor
    ~Matrix() {
        for (int i = 0; i < rows; i++) {
            delete[] data[i];
        }

        delete[] data;
    }
};

int main() {
    Matrix m1(2, 3);

    m1.set(0, 0, 10);
    m1.set(0, 1, 20);
    m1.set(0, 2, 30);
    m1.set(1, 0, 40);
    m1.set(1, 1, 50);
    m1.set(1, 2, 60);

    cout << "Original Matrix:" << endl;
    m1.display();

    Matrix m2 = m1;

    cout << "\nCopied Matrix:" << endl;
    m2.display();

    return 0;
}
