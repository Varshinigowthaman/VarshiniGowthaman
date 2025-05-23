#include <stdio.h>
int main() {
    int arr[100] = {15, 40, 65, 80};
    int n = 4, pos = 2, val = 52;
    for (int i = n; i > pos; i--)
        arr[i] = arr[i - 1];
    arr[pos] = val;
    n++;
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}