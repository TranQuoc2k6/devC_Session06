#include<stdio.h>
int main() {
    int n = 2;
    int input_number;
    // do {
    //     printf("Nhap so nguyen bat ky:");
    //     scanf("%d", &input_number);
    // } while (input_number != n);
    while (input_number != n) {
        printf("Nhap so nguyen bat ky:");
        scanf("%d", &input_number);
        if (input_number < n) {
            printf("Nho hon\n");
        }else if (input_number > n) {
            printf("Lon hon\n");
        }
    }
    printf("Da trung voi so da cho");

    return 0;
}