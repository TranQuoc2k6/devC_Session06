#include<stdio.h>
#include<math.h>
int main(){
	double a, b, c,delta, n1, n2;
	printf("Nhap he so a, b, c:\n");
    printf("a = ");
    scanf("%lf", &a);
    printf("b = ");
    scanf("%lf", &b);
    printf("c = ");
    scanf("%lf", &c);
    if(a==0){
    	if(b==0){
    		if(c==0){
    			printf("Phuong trinh vo so nghiem.\n");
			}else{
				printf("Phuong trinh vo nghiem.\n");
			}
		}else{
			n1=-c/b;
			printf("Phuong trinh co mot nghiem: x = %.2lf\n", n1);
		}
	}else{
		delta=b*b-4*a*c;
		if(delta>0){
			n1=(-b+sqrt(delta))/(2*a);
			n2=(-b-sqrt(delta))/(2*a);
			printf("Phuong trinh co hai nghiem phan biet:\n");
            printf("n1 = %.2lf\n", n1);
            printf("n2 = %.2lf\n", n2);
		}else if(delta==0){
			n1=-b/(2*a);
			printf("Phuong trinh co nghiem kep: n1 = n2 = %.2lf\n", n1);
		}else{
			printf("Phuong trinh vo nghiem.\n");
		}
	}
	return 0;
}
