#include <iostream>
#include <algorithm>

using namespace std;

bool compare_asc(int a, int b) {
    // a가 b보다 작을 때 true이므로 오름차순 정렬을 한다.
    return a < b;
}

bool compare_desc(int a, int b) {
    // a가 b보다 클 때 true이므로 내림차순 정렬을 한다.
    return a > b;
}

int main() {
    int a[10] = {9, 3, 5, 4, 1, 10, 8, 6, 7, 2};
    sort(a, a + 10, compare_asc); // 오름차순이 기본값이다.
    for(int i = 0; i < 10; i++) {
        cout << a[i] << ' ';
    }
    cout << '\n';
    sort(a, a + 10, compare_desc);
    for(int i = 0; i < 10; i++) {
        cout << a[i] << ' ';
    }
}