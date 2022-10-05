#include <iostream>
#include <algorithm>

using namespace std;

// �л����̶�� �ڷ����� �������
class Student {
public:
    string name;
    int score;
    Student(string name, int score) { // �����ڴ� Ư���� ��ü�� �ʱ�ȭ �� �� ����Ѵ�.
        this->name = name;
        this->score = score;
    }
    // ���� ������ '������ ���� ����'
    bool operator <(Student &Student) {
        // ���� �ٸ� �л����� ���ٸ� true => ��������
        return this->score < Student.score;
    }
};

int main() {
    Student students[] = {
        Student("������", 90),
        Student("�̻��", 93),
        Student("���ѿ�", 97),
        Student("������", 87),
        Student("������", 92)
    };

    // �л� Ŭ���� �ȿ��� ���� ������ ������⿡ 3��° ���� �ʿ� X
    sort(students, students + 5);
    for(int i = 0; i < 5; i++){
        cout << students[i].name << ' ';
    }
}