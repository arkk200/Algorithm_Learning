#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(
    pair<string, pair<int, int> > a, 
    pair<string, pair<int, int> > b
) {
    if(a.second.first == b.second.first) { // 점수가 같다면
        return a.second.second > b.second.second; // 나이순으로 오름차순
    } else {
        return a.second.first > b.second.first; // 점수순으로 내림차순
    }
}

int main() {
    // pair안에 pair를 넣을 수 있고 
    // 2개의 변수를 기준으로 정렬할 수도 있다.
    vector<pair<string, pair<int, int> > > v;

    v.push_back(pair<string, pair<int, int> >("나동빈", pair<int, int>(90, 19961222)));
    v.push_back(pair<string, pair<int, int> >("이태일", pair<int, int>(97, 19930518)));
    v.push_back(pair<string, pair<int, int> >("박한울", pair<int, int>(95, 19930203)));
    v.push_back(pair<string, pair<int, int> >("이상욱", pair<int, int>(90, 19921207)));
    v.push_back(pair<string, pair<int, int> >("강종구", pair<int, int>(88, 19900302)));
    
    // 정렬할 기준이 3개가 넘어가면 class를 쓰는게 나을 수 있다.
    sort(v.begin(), v.end(), compare);

    for(int i = 0; i < v.size(); i++){
        cout << v[i].first << ' ';
    }
}