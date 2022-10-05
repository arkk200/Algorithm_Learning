#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> s;
    s.push(7);
    s.push(5);
    s.push(4);
    s.pop();
    s.push(6);
    s.pop();
    while(!s.empty()) {
        // .top()은 스택의 가장 마지막 요소를 출력한다.
        cout << s.top() << ' ';
        s.pop();
    }
    return 0;
}