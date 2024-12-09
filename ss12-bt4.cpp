#include <stdio.h>
int timSoLonNhat(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
int main() {
    int arr[] = {3, 7, 2, 9, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int largest = timSoLonNhat(arr, n);
    printf("So lon nhat trong mang la: %d\n", largest);

    return 0;
}
