#include<stdio.h>
int main() {
    int number, i;
    int digits[10];
    int count = 0;
    printf("Nhap mot so nguyen bat ky:");
    scanf("%d", &number);

    int negative = number;
    if (negative < 0) {
        negative = -number;
    }

    while (negative > 0) {
        digits[count] = negative % 10;
        negative /= 10;
        count++;
    }
    printf("Cac chu so cua %d la:\n", number);
    for (i = count - 1; i>= 0; i--) {
        printf("%d\n", digits[i]);
    }
    return 0;
}