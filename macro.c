#include <stdio.h>
#define SUM(a,b) (a)+(b)
#define SQUARE(a) (a)*(a)
int main(void) {
    int n1,n2;
    printf("enter two numbers: ");
    scanf("%d%d",&n1,&n2);
    printf("\nSUM(%d,%d)= %d", n1, n2, SUM(n1,n2));
    printf("\nSQUARE(SUM(%d,%d))= %d", n1, n2, SQUARE(SUM(n1,n2)));
    printf("\nSQUARE(%d)= %d",n1,SQUARE(n1));
return 0;
}