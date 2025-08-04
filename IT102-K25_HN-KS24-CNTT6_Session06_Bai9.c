#include<stdio.h>
int main() {
    int choice, num1, num2, num3, sum, max, min;
    float average;
    while (choice != 6) {
        printf("Menu\n"
           "1. Nhap 3 so\n"
           "2. Tong 3 so\n"
           "3. Trung binh cong 3 so\n"
           "4. So nho nhat\n"
           "5. So lon nhat\n"
           "6. Thoat\n"
           "===> Lua chon cua ban:");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Nhap so thu nhat:");
                scanf("%d", &num1);
                printf("Nhap so thu hai:");
                scanf("%d", &num2);
                printf("Nhap so thu ba:");
                scanf("%d", &num3);
                break;
            case 2:
                sum = num1 + num2 + num3;
                printf("Tong 3 so la: %d\n", sum);
                break;
            case 3:
                average = (float)sum / 3;
                printf("Trung binh cong 3 so la: %.2f\n", average);
                break;
            case 4:
                min = num1;
                if (min > num2) {
                    min = num2;
                }
                if (min > num3) {
                    min = num3;
                }
                printf("So nho nhat la: %d\n", min);
                break;
            case 5:
                max = num1;
                if (max < num2) {
                    max = num2;
                }
                if (max < num3) {
                    max = num3;
                }
                printf("So lon nhat la: %d\n", max);
                break;
            case 6:
                printf("Ban da thoat\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai\n");
                break;
        }
    }
    return 0;
}