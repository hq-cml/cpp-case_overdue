#include <iostream>

using namespace std;

extern void TestTemplateFunction();
extern void TestTemplateClass();
extern void oneWellNumber();
extern void twoWellNumber();
extern int TestThreads ();
extern int TestVector ();
extern int TestJoinable ();

int print() {
    cout << "Hello world!" << endl;
    return 0;
}

int main() {
    TestJoinable();
    return 0;
}