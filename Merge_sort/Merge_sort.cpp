#include <stdio.h>

int number = 8; // 배열할 요소 개수
int sorted[8]; // 정렬 배열은 반드시 전역 변수로 선언

// m, middle, n은 예를 들어 정렬된 두 집합을 합칠 때
//  1 1 3 4 6 7 7 9 | 2 2 3 5 7 8 9 10
// ^: m             ^: middle         ^: n
// 을 가르킨다.
void merge(int *a, int m, int middle, int n) {
    int i = m;
    int j = middle + 1;
    int k = m; // 전역 변수로 선언된 배열에선 i랑 k는 같음
    // 작은 순서대로 배열에 삽입
    while(i <= middle && j <= n) {
        if(a[i] < a[j]) {
            sorted[k] = a[i];
            i++;
        } else {
            sorted[k] = a[j];
            j++;
        }
        k++;
    }
    // 남은 데이터도 삽입
    if(i > middle){ // i가 먼저 끝난다면
        for(int t = j; t <= n; t++) {
            sorted[k] = a[t];
            k++;
        }
    } else { // j가 먼저 끝난다면
        for(int t = i; t <= middle; t++) {
            sorted[k] = a[t];
            k++;
        }
    }
    // 정렬된 배열을 삽입
    for(int t = m; t <= n; t++) {
        a[t] = sorted[t];
    }
}

void mergeSort(int *a, int m, int n) {
    // 크기가 1보다 큰 경우
    if(m < n) {
        int middle = (m + n) / 2;
        mergeSort(a, m, middle);
        mergeSort(a, middle + 1, n);
        merge(a, m, middle, n);
    }
}

int main() {
    int array[number] = {7, 6, 5, 8, 3, 5, 9, 1};
    mergeSort(array, 0, number - 1);
    for(int i = 0; i < number; i++) printf("%d ", array[i]);
}