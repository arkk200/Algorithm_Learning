#include <stdio.h>

int main(){
    int i, j, temp;
    int array[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
    for(i = 0; i < 9; i++){
        j = i;
        // j가 0보다 작아져, 인덱스를 벗어날 위험을
        // 없애기 위해 j >= 0 조건도 추가해준다.
        while(array[j] > array[j+1] && j >= 0){
            // 큰 값이 오른쪽으로 한 칸씩 움직이는건
            // Swapping을 이용한다.
            temp = array[j];
            array[j] = array[j+1];
            array[j+1] = temp;
            j--;
        }
    }
    for(i = 0; i < 10; i++){
        printf("%d ", array[i]);
    }
    return 0;
}