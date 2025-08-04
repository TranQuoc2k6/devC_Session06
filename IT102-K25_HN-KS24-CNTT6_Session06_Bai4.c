#include<stdio.h>
int main() {
    int n, i, multiplication;
    printf("Nhap bang cuu chuong muon xem:");
    scanf("%d", &n);
    for (i=0; i<11; i++) {
        multiplication = n * i;
        printf("%d x %d = %d\n", n,i,multiplication);
    }
}