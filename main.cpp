#include <iostream>

using namespace std;

extern void TestTemplateFunction();
extern void TestTemplateClass();
extern void oneWellNumber();
extern void twoWellNumber();
extern int TestThreads ();
extern int TestVector ();

int print() {
    cout << "Hello world!" << endl;
    return 0;
}

int main() {
    TestVector();
    return 0;
}