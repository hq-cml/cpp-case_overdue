#include <iostream>

using namespace std;

extern void TestTemplateFunction();
extern void TestTemplateClass();
extern void oneWellNumber();
extern void twoWellNumber();

int print() {
    cout << "Hello world!" << endl;
    return 0;
}

int main() {
    oneWellNumber();
    twoWellNumber();
    return 0;
}