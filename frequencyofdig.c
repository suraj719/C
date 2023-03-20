#include<stdio.h>
int counter(int n);
int main(void) {
    int n;
    printf("enter num: ");
    scanf("%d",&n);
    while(n>0){
        printf("count of %d is: %d\n",n%10,counter(n));
        n=n/10;
    }
return 0;
}
int counter(int n) {
    static int r;
    static int cnt;
    while(n>0) {
        cnt=1;
        r=n%10;
        n=n/10;
        if(r==n%10) {
            cnt++;
            while(n>0){
                r=n%10;
                n=n/10;
                if(r==n%10){ 
                    cnt++;
                }
            }
        }
        else {
            n=n/10;
        }
        //printf("\ncount of %d is: %d\n",r,cnt);
    }
return cnt;
}