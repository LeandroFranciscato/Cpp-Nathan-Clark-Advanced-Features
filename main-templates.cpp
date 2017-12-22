#include <iostream>
using namespace std;
/* //Simple template
template <class GenericType>
GenericType maxValue(GenericType a, GenericType b) {
    return (a > b ? a : b);
}

int main() {
    cout << maxValue(1, 2) << endl;
    cout << maxValue(1.1, 2.1) << endl;
    cout << maxValue(1.111, 2.111) << endl;
    cout << maxValue("a1", "a2") << endl; // ?????
}*/

/*// Class template
template <class T>
class Example {
private:
    T a, b;
public:

    void setA(T a) {
        this->a = a;
    }

    void setB(T b) {
        this->b = b;
    }

    void display() {
        cout << "The value of \"A\" is " << this->a << ". The value of \"B\" is " << this->b << endl;
    }
};

int main() {
    Example<string> example;
    example.setA("test");
    example.setB("50.808080");
    example.display();
}
 */

//Templates with standard dataType

template <class T, int N>
class Example {
private:
    T a[N];
public:

    void setA(T a[N]) {
        for (int i = 0; i < N; i++) {
            this->a[i] = a[i];
        }
    }

    T getAByPosition(int position) {
        if (position < N && position >= 0)
            return this->a[position];
        else
            return 0;
    }
};
/*
int main() {
    Example<int, 2> example;
    int a[2];
    a[0] = 10;
    a[1] = 20;
    example.setA(a);
    cout << example.getAByPosition(1) << endl;

    // ANOTHER DATA TYPE
    Example<string, 3> example2;
    string b[3];
    b[0] = "test";
    b[1] = "test1";
    b[2] = "test2";

    example2.setA(b);
    cout << example2.getAByPosition(2) << endl;
}*/