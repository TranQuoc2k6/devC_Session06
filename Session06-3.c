#include<stdio.h>
int main(){
	const int pass=2006;
	int nhapPass;
	printf("Mat khau la: ");
	scanf("%d",&nhapPass);
	if(pass==nhapPass){
	    printf("Chinh xac");
	}else{
		printf("Khong chinh xac");
	}
	return 0;
}
