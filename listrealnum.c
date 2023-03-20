#include<stdio.h>
#include<stdlib.h>
int main() {
    int size,*num;
    printf("Enter the size of list: ");
    scanf("%d", &size);
    num = (int *) calloc(size,sizeof(int));
    for(int i = 0; i < size; i++) {
        printf("Enter element: ");
        scanf("%d", &num[i]);
    }
    int newsize;
    printf("Enter the new size: ");
    scanf("%d", &newsize);
    num = (int *) realloc(num, newsize * sizeof(int)); 
    for (int i = size; i < newsize; i++) {
        printf("Enter additional element: ");
        scanf("%d", &num[i]);
    }
    printf("List items after extending the size: ");
    for(int i=0;i<newsize;i++) {
        printf("%d ",num[i]);
    }
    free(num); 
return 0;
}
