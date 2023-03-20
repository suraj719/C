//purpose: to print fib series using recursion (static method)
#include <stdio.h>
static int i,fibo,t1=0,t2=1;
void fib(int n);
int main(void)
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("\n %d %d ",t1,t2);
    fib(n);
    return 0;
}
void fib(int n) {
        fibo=t1+t2;
        printf("%d ",fibo);
        t1=t2;
        t2=fibo;
        i++;
        if(i<=n-3){
            fib(n);
        }
}