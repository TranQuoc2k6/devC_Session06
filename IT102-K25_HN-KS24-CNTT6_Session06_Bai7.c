#include<stdio.h>
int main() {
    int a, b, i, ucln;
    printf("Nhap so nguyen duong thu nhat:");
    scanf("%d", &a);
    printf("Nhap so nguyen duong thu hai:");
    scanf("%d", &b);
    for (i = 1; i<= a || i<= b; i++) {
        if (a % i == 0 && b % i == 0) {
            ucln = i;
        }
    }
    printf("%d la ucln cua %d va %d", ucln, a, b);
    return 0;
}