#include <stdio.h>

int giai_thua(int n) {
    int giai_thua = 1;
    for (int i = 2; i <= n; i++) {
        giai_thua *= i;
    }
    return giai_thua;
}
int main() {
    int num;
    printf("Nhap vao mot so nguyen: ");
    scanf("%d", &num);
    if (num < 0) {
        printf("Giai thua khong xac dinh.\n");
    } else {
        printf("Giai thua cua %d la: %d\n", num, giai_thua(num));
    }

    return 0;
}
