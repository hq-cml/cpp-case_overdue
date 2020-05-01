#include <iostream>

using namespace std;

extern void TestTemplateFunction();
extern void TestTemplateClass();

int print() {
    cout << "Hello world!" << endl;
    return 0;
}

int main() {
    TestTemplateClass();
    return 0;
}