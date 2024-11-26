#include<stdio.h>
int main(){
	int day, month, year;
    printf("Nhap nam: ");
    scanf("%d", &year);
    printf("Nhap thang: ");
    scanf("%d", &month);	
    if(month<1||month>12){
    	printf("Thang khong hop le\n");
        return 1;
	}
	switch(month){
		case 1:case 3:case 5: case 7:case 8:case 10:case 12:
		day = 31;
		break;
		case 4:case 6:case 9:case 11:
		day = 30;
		break;
		case 2:
			if((year%400==0)&&(year%4==0&&year%100!=0)){
				day =28 ;
			}else{
				day=29;
			}
	}
	printf("Thang %d nam %d co %d ngay.\n", month, year, day);
	return 0;
}
