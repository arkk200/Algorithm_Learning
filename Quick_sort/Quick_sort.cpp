#include <stdio.h>

int number = 10;
int data[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};

void quickSort(int *data, int start, int end){
    if (start >= end){ // 원소가 1개인 경우
        return;
    }

    int key = start; // 키는 첫번째 원소
    int i = start + 1; // 큰 값을 찾는 인덱스
    int j = end;
    int temp;
    while(i <= j){ // 엇갈릴 때까지 반복함
        // 키 값보다 큰 값을 만날 때까지
        // i <= end로 가장 오른쪽 인덱스에서 한 칸 뒤인 인덱스가 될 때까지만 수행
        // 조건에서 data[i]와 data[key], data[j]와 data[key] 사이에 부등식만 반대로 바꿔주면 정렬방식이 거꾸로 바뀐다.
        while(data[i] <= data[key] && i <= end) i++;
        // 키 값보다 작은 값을 만날 때까지
        // j > start로 start 인덱스가 될 때까지만 수행
        while(data[j] >= data[key] && j > start) j--;
        
        if (i > j) { // 엇갈린 상태라면 키 값과 교체
            temp = data[j];
            data[j] = data[key];
            data[key] = temp;
        } else { // 엇갈리지 않았다면
            temp = data[j];
            data[j] = data[i];
            data[i] = temp;
        }
    }
    quickSort(data, start, j - 1);
    quickSort(data, j + 1, end);
}

int main(){
    quickSort(data, 0, number - 1);
    for(int i = 0; i < number; i++) {
        printf("%d ", data[i]);
    }
    return 0;
}