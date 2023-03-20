#include <stdio.h>
int main(void) {
    int n, count;
    printf("Enter range: ");
    scanf("%d", &n);
    printf("prime numbers between 1 and %d : ", n);
    for(int i=1;i<=n;i++) {
        count=0;
        for(int j=1;j<=i;j++) {
            if(i%j==0)
                count++;
        }
        if(count==2)
            printf("%d\t",i);
    }
    return 0;
}