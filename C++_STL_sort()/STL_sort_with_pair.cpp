#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // pair�� �� ���� �����͸� �ٷ�� ���� 
    // ����ϴ� ���̺귯���� Ŭ������ �̿��ߴ� ����� ��ü�� ���̴�.
    // �ܼ��ϰ� ������ �����Ѵٸ� 
    // �տ� ���� �������� ������ �̷������.
    vector<pair<int, string> > v;
    // v.push_back()�� �ڿ������� ���� �߰��ϴ� �Լ��̴�.
    v.push_back(pair<int, string>(90, "���ѿ�"));
    v.push_back(pair<int, string>(85, "������"));
    v.push_back(pair<int, string>(82, "������"));
    v.push_back(pair<int, string>(98, "������"));
    v.push_back(pair<int, string>(79, "�̻��"));

    // v.begin()�� v.end()�� ���� ������ ���۰� �� �ּҸ� ��ȯ�Ѵ�.
    // printf("%d %d\n", v.begin(), v.end());
    sort(v.begin(), v.end());
    // �� �����Ͱ� ���� ���������Ƿ� �տ� ���� �������� ������ �ص� 
    // �ڿ� �� ���� �׿� ���� ���ĵȴ�.

    // v.size()�� ������ ũ�⸦ ��ȯ���ִ� �Լ��̴�.
    for(int i = 0; i < v.size(); i++){
        // pair�� .first, .second�� ���� ������ �� �ִ�.
        cout << v[i].second << ' ';
    }
}