#include <iostream>
#include <thread>
using namespace std;

void task1(string msg) {
    cout << "task1 says: " << msg << endl;
}
/*
int main() {
    thread t1(task1, "Hello");
    thread t2(task1, "Hello");    
    cout << t1.get_id() << endl;
    cout << t2.get_id() << endl;
    t1.join();
    t2.join();
}
*/