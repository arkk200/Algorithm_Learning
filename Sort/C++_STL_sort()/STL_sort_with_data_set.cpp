#include <iostream>
#include <algorithm>

using namespace std;

// 학생형이라는 자료형을 만들어줌
class Student {
public:
    string name;
    int score;
    Student(string name, int score) { // 생성자는 특정한 객체를 초기화 할 때 사용한다.
        this->name = name;
        this->score = score;
    }
    // 정렬 기준은 '점수가 작은 순서'
    bool operator <(Student &Student) {
        // 내가 다른 학생보다 낮다면 true => 내림차순
        return this->score < Student.score;
    }
};

int main() {
    Student students[] = {
        Student("나동빈", 90),
        Student("이상욱", 93),
        Student("박한울", 97),
        Student("강종구", 87),
        Student("이태일", 92)
    };

    // 학생 클래스 안에서 정렬 기준을 정해줬기에 3번째 인자 필요 X
    sort(students, students + 5);
    for(int i = 0; i < 5; i++){
        cout << students[i].name << ' ';
    }
}