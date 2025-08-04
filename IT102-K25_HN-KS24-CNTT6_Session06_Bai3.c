#include<stdio.h>
int main() {
    int n, total,i;
    printf("Nhap vao so nguyen duong:");
    scanf("%d", &n);
    if (n < 0) {
        printf("so vua nhap khong phai la nguyen duong");
    }else {
        for (i=1; i<=n; i++) {
            total += i;
        }
        printf("Tong tat ca cac so tu 1 den so n la: %d", total);
    }
    return 0;
}