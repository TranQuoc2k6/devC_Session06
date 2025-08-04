#include<stdio.h>
int main() {
    int i,j,multiplication;
    for (i=1; i<10; i++) {
        for (j=0; j<11; j++) {
            multiplication = i*j;
            printf("%d x %d = %d\n\n", i,j,multiplication);
        }
    }
}