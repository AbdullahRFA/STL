#include <bits/stdc++.h>
using namespace std;
int main() {
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    if (q.empty()) {
        cout << "Queue is empty" << endl;
    } else {
        cout << "Queue is not empty" << endl;
    }
    cout << "Front element: " << q.front() << endl;

    cout << "Back element: " << q.back() << endl;

    cout << "Queue size: " << q.size() << endl;

    q.pop();

    cout << "Front element after pop: " << q.front() << endl;

    return 0;
}

