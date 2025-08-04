#include<stdio.h>
int main() {
    int number_1, number_2, total, subtraction, multiplication;
    float division;
    int choice;
    printf("Nhap so nguyen bat ky thu nhat:");
    scanf("%d", &number_1);
    printf("Nhap so nguyen bat ky thu hai:");
    scanf("%d", &number_2);
    while (choice != 5) {
        printf("CALCULATOR"
            "1. Tong 2 so"
            "2. Hieu 2 so"
            "3. Tich 2 so"
            "4. Thuong 2 so"
            "5. Thoat "
            "===>Lua chon cua ban: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                total = number_1 + number_2;
                printf("Tong 2 so la: %d\n", total);
                break;
            case 2:
                subtraction = number_1 - number_2;
                printf("Hieu 2 so la: %d\n", subtraction);
                break;
            case 3:
                multiplication = number_1 * number_2;
                printf("Tich 2 so la: %d\n", multiplication);
                break;
            case 4:
                division = (float)number_1 / (float)number_2;
                printf("Thuong 2 so la: %.2f\n", division);
                break;
            case 5:
                printf("Ban da thoat\n");
                break;
            default:
                printf("Lua chon khong hop le\n");
                break;
        }
    }
    return 0;
}