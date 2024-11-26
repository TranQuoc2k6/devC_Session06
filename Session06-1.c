#include<stdio.h>
int main(){
	int number1, number2, number3, number4, number5, sum;
	printf("nhap so thu nhat la: ");
	scanf("%d", &number1);
	printf("nhap so thu hai la: ");
	scanf("%d", &number2);
	printf("nhap so thu ba la: ");
	scanf("%d", &number3);
	printf("nhap so thu tu la: ");
	scanf("%d", &number4);
	printf("nhap so thu nam la: ");
	scanf("%d", &number5);
	if(number1%2!=0){
		sum=number1;
	}
	if(number2%2!=0){
		sum+=number2;
	}
	if(number3%2!=0){
		sum+=number3;
	}
	if(number4%2!=0){
		sum+=number4;
	}
	if(number5%2!=0){
		sum+=number5;
	}
	printf("\nket qua cua so le la: %d", sum);
	return 0;
}
