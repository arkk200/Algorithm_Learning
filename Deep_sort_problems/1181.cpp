#include <iostream>
#include <algorithm>

using namespace std;

string a[20000];
int n;

// 자기자신이 첫번째 인자가 됨
bool compare(string a, string b) {
    // 길이가 짧은 순서 우선
    if(a.length() < b.length()){
        // 자기자신의 문자열의 길이가 더 짧다면 높은 우선순위
        return 1;
    } else if (a.length() > b.length()) {
        // 자기자신의 문자열의 길이가 더 짧다면 낮은 우선순위
        return 0;
    // 길이가 같은 경우
    } else {
        // string같은 경우 비교연산자를 넣으면 
        // 사전순으로 비교해준다.
        // 자기자신이 사전순으로 먼저 나오게함
        return a < b;
    }
}

int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n, compare);
    for(int i = 0; i < n; i++) {
        // 겹치는 단어는 하나만 출력한다.
        if(i > 0 && a[i] == a[i - 1]) {
            continue;
        } else {
            cout << a[i] << '\n';
        }
    }
    return 0;
}