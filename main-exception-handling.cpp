#include <iostream>
#include <exception>
using namespace std;

class demoException : public exception {
    virtual const char* what() const throw() {
        return "An demoException has occurred";
    }
} demoException;
/*
int main() {
    
    try {
        throw demoException;
    } catch (exception& e) {
        cout << e.what();
    }

    return 0;
}

*/