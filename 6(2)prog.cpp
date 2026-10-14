#include<iostream>
#include<cstring>
using namespace std;

class Text{
private:
    char *buf;
public:
    Text(const char *s = "") {
        buf = new char[strlen(s) + 1];
        strcpy(buf, s);
    }
    ~Text() {
        delete[] buf;
    }
    Text(const Text &t) {
        buf = new char[strlen(t.buf) + 1];
        strcpy(buf, t.buf);
    }
    Text& operator=(const Text &t) {
        if(this != &t) {
            delete[] buf;
            buf = new char[strlen(t.buf) + 1];
            strcpy(buf, t.buf);
        }
        return *this;
    }
    friend ostream& operator<<(ostream &os, const Text &t) {
        os << t.buf;
        return os;
    }
    void show() {
        cout << buf << endl;
    }
};

int main() {
  Text a("alpha"), b("beta") , c("gamma");
  b=a;
  c=a;
  a.show(); b.show(); c.show();


 return 0;

}
