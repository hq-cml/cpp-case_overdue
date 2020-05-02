#include <iostream>

using namespace std;

extern void TestTemplateFunction();
extern void TestTemplateClass();
extern void oneWellNumber();
extern void twoWellNumber();
extern int TestThreads ();
extern int TestVector ();
extern int TestJoinable ();
extern int TestThreads ();
extern int TestCpp11Threads ();

int print() {
    cout << "Hello world!" << endl;
    return 0;
}

int main() {
    TestCpp11Threads();
    return 0;
}