#include<stdio.h>
void swap(int *n1,int *n2);
int main(void) {
    int n1,n2;
    printf("Enter two numbers: ");
    scanf("%d %d",&n1,&n2);
    printf("\nBefore swapping: %d,%d",n1,n2);
    swap(&n1,&n2);
    printf("\nAfter swapping: %d,%d",n1,n2);
}
void swap(int *n1,int *n2){
    int temp=*n1;
    *n1=*n2;
    *n2=temp;
}