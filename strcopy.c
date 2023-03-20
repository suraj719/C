#include<stdio.h>
#include<stdlib.h>
void readstr(char *str);
int length(char *str);
void stringcpy(char *str,char *copystr,int len);
int main(void) {
    char str[100],*copystr;
    int len;
    readstr(str);
    printf("\nEntered string(stored in str) is: %s",str);
    len=length(str);
    //printf("\nlength of string is: %d",len);
    copystr=(char *) calloc(len,sizeof(char));
    stringcpy(str,copystr,len);
    printf("\ncopied string(stored in copystr) is: %s",copystr);
    free(copystr);
return 0;
}
void readstr(char *str) {
    printf("Enter the string: ");
    scanf("%[^\n]",str);
}
int length(char *str) {
    int i;
    for(i=0;*(str+i)!='\0';i++);
    return i;
}
void stringcpy(char *str,char *copystr,int len) {
    //int j=0,i;
    for(int i=0;i<len;i++) {
        copystr[i]=str[i];
        //j++;
    }
}