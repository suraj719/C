#include<stdio.h>
int main(void) {
    for(int i=1;i<=9;i+=2) {
        for(int k=9;k>=1;k=k-2) {
            printf(" ");
            if(k==i) {
                break;
            }
        }
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    for(int i=7;i>=1;i-=2) {
        for(int k=9;k>=1;k=k-2) {
            printf(" ");
            if(k==i) {
                break;
            }
        }
        for(int j=1;j<=i;j++) {
            printf("%d",j);
        }
        printf("\n");
    }
return 0;
}