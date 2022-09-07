#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // pair는 한 쌍의 데이터를 다루기 위해 
    // 사용하는 라이브러리로 클래스를 이용했던 방식을 대체한 것이다.
    // 단순하게 정렬을 수행한다면 
    // 앞에 값을 기준으로 정렬이 이루어진다.
    vector<pair<int, string> > v;
    // v.push_back()은 뒤에서부터 값을 추가하는 함수이다.
    v.push_back(pair<int, string>(90, "박한울"));
    v.push_back(pair<int, string>(85, "이태일"));
    v.push_back(pair<int, string>(82, "나동빈"));
    v.push_back(pair<int, string>(98, "강종구"));
    v.push_back(pair<int, string>(79, "이상욱"));

    // v.begin()과 v.end()는 각각 벡터의 시작과 끝 주소를 반환한다.
    // printf("%d %d\n", v.begin(), v.end());
    sort(v.begin(), v.end());
    // 두 데이터가 서로 묶여있으므로 앞에 값을 기준으로 정렬을 해도 
    // 뒤에 값 또한 그에 따라 정렬된다.

    // v.size()는 벡터의 크기를 반환해주는 함수이다.
    for(int i = 0; i < v.size(); i++){
        // pair는 .first, .second로 값에 접근할 수 있다.
        cout << v[i].second << ' ';
    }
}