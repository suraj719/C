#include<stdbool.h>
#include<stdio.h>
void reverse(char str[],char strrev[],int len);
int length(char str[]);
bool ispalindrome(char str[],char strrev[],int len);
int main(void) {
    char str[100],strrev[100];
    int len;
    bool palflag;
    printf("Enter the string: ");
    scanf("%s",str);
    printf("original string is: %s",str);
    len=length(str);
    printf("\nThe length of string[%s] is: %d\n",str,len);
    reverse(str,strrev,len);
    printf("string after reversing is: %s",strrev);
    palflag=ispalindrome(str,strrev,len);
    if(palflag==true) printf("\n%s is a palindrome string\n",str);
    else printf("\n%s is not a palindrome string\n",str);
return 0;
}
int length(char str[]) {
    int i;
    for(i=0;str[i]!='\0';i++);
return i;
}
void reverse(char str[],char strrev[],int len) {
    int j=0;
    for(int i=len-1;i>=0;i--) {
        strrev[j]=str[i];
        j++;
    }
}
bool ispalindrome(char str[],char strrev[],int len) {
    for(int i=0;i<len;i++) {
        if(str[i]!=strrev[i]){
            return false;
        }
    }
    return true;
}