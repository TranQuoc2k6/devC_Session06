#include<stdio.h>
int main(){
	int number[5]; 
	int positive=0, negative=0;
	for(int order=0;order<5;order++){
		printf("nhap so thu %d la: ", order+1);
		scanf("%d", &number[order]);
	}
	for(int order=0;order<5;order++){
		if(number[order]%2==0){
			positive++;
		}
		else{
			negative++;
		}
	}
	printf("co %d so chan\t", positive);
	printf("co %d so le", negative);
	return 0;
}
