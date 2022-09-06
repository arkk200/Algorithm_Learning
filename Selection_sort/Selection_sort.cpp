#include <iostream>

int main(){
    // i, j는 탐색하기 위해 사용됨
    // min은 최솟값, index는 최솟값의 인덱스
    // temp는 값을 바꾸기 위해 사용됨
    int i, j, min, index, temp;
    int array[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
    for(i = 0; i < 10; i++) {
        // min값은 항상 최솟값을 선택해야 되기 때문에 처음엔 큰 값을 넣어준다.
        min = 999;
        for(j = i; j < 10; j++){
            if(min > array[j]){
                min = array[j];
                index = j;
            }
        }
        // 최솟값과 i번째 위치의 값의 위치를 서로 바꿈
        // Swapping을 하기 위해선 이렇게 3코드를 이용할 수 있다.
        temp = array[i];
        array[i] = array[index];
        array[index] = temp;
    }
    for(i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}