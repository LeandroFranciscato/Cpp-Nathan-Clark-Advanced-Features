#include <iostream>
using namespace std;
namespace A {

    void functionA() {
        cout << "This is FunctionA from Namespace A" << endl;
    }
}

namespace B {

    void functionA() {
        cout << "This is FunctionA from namespace B" << endl;
    }
}

namespace C {

    void functionA() {
        cout << "This is the FunctionA from namespace C" << endl;
    }
    namespace C1 {

        void functionA() {
            cout << "This is the functionA from namespace C::C1" << endl;
        }
    }
}


/*
int main() {
    A::functionA();
    B::functionA();
    return 0;
}
 */
/*
using namespace B;
int main () {
    functionA();
    return 0;
}
 */
/*
int main() {
    C::functionA();
    C::C1::functionA();
    return 0;
}
 */