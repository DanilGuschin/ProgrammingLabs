//функция сортировки
#include <stdio.h>
#include <stdlib.h>

int compare_asc(const void *a, const void *b) {
    int ia = *(const int *)a;
    int ib = *(const int *)b;
    return (ia > ib) - (ia < ib);
}

int main(void) {
    int arr[] = {42, 7, 19, 3, 25};
    size_t n = sizeof(arr) / sizeof(arr[0]);

    qsort(arr, n, sizeof(int), compare_asc);

    for (size_t i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}