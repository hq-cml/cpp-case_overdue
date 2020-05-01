#include <iostream>

using namespace std;

extern void TestTemplateFunction();

int print() {
    cout << "Hello world!" << endl;
    return 0;
}

int main() {
    TestTemplateFunction();
    return 0;
}