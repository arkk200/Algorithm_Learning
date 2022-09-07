#include <stdio.h>

void quick_sort(int *arr, int start, int end) {
    if(start >= end) return;

    int pivot = start;
    int i = start + 1, j = end, temp;

    while(i <= j) {
        while(arr[i] <= arr[pivot] && i <= end) i++;
        while(arr[j] >= arr[pivot] && j > start) j--;

        if(i > j) {
            temp = arr[j];
            arr[j] = arr[pivot];
            arr[pivot] = temp;
        } else {
            temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
        }
    }
    quick_sort(arr, start, j - 1);
    quick_sort(arr, j + 1, end);
}

int main() {
    int i = 3, arr[3];
    while(i--) scanf("%d", arr + i);
    quick_sort(arr, 0, 2);
    for(i = 0; i < 3; i++) printf("%d ", arr[i]);
}