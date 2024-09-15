#include<bits/stdc++.h>
using namespace std;
int main() {
     stack<int> stk;
    stk.push(10);
    stk.push(20);
    stk.push(30);
    if (stk.empty()) {
         cout << "Stack is empty\n";
    } else {
         cout << "Stack is not empty\n";
    }
     cout << "Top element: " << stk.top() << "\n";

    stk.pop();
    stk.pop();

     cout << "Size of the stack: " << stk.size() << "\n";

    stk.pop();

    if (stk.empty()) {
         cout << "Stack is empty\n";
    } else {
         cout << "Top element: " << stk.top() << "\n";
    }

    return 0;
}

