#include<stdio.h>
int main() {
    int a, b, i, ucln, bcnn;
    printf("Nhap so a:");
    scanf("%d", &a);
    printf("Nhap so b:");
    scanf("%d", &b);
    for (i= 1; i<= a || i<= b; i++) {
        if (a % i == 0 && b % i == 0) {
            ucln = i;
        }
    }
    bcnn = a * b / ucln;
    printf("%d la bcnn cua %d va %d", bcnn, a, b);
    return 0;
}