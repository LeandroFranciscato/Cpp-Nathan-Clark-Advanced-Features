#include <iostream>
#include <array>
#include <list>
#include <vector>
#include <stack>
#include <queue>
using namespace std;

int main() {
    
    //Array    
    array<int, 3> myArray;
    myArray[0] = 10;
    myArray[1] = 11;
    myArray[2] = 12;
    cout << myArray.size() << endl;
    cout << myArray.front() << endl;
    cout << myArray.back() << endl;
    for (int i = 0; i < myArray.size(); i++) {
        cout << myArray.at(i) << endl;
    }
    array<int, 0> myEmptyArray;
    cout << myEmptyArray.empty() << endl;

    //List    
    list<int> myList;
    cout << myList.empty() << endl;    
    myList.push_back(3);
    myList.push_back(2);
    myList.push_back(1);    
    cout << myList.size() << endl;
    cout << myList.back() << endl;
    myList.reverse();
    cout << myList.front() << endl;
     
    
    // Stack    
    stack<int> myStack;
    myStack.push(1);
    myStack.push(2);
    myStack.push(3);        
    cout << myStack.top() << endl;    
    myStack.pop();  
    cout << myStack.top() << endl;    
    
    // Queue    
    queue<int> myQueue;
    myQueue.push(1);
    myQueue.push(2);
    myQueue.push(3);
    cout << myQueue.front() << endl;
    myQueue.pop();
    cout << myQueue.front() << endl;
            
    return 0;
}
