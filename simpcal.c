#include <stdio.h>
int main() {
    float n1, n2;
    int op;
    do {
        printf("\n\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Exit");
        printf("\n\nSelect an operation: ");
        scanf("%d", &op);
        if(op==5) {
            goto exit;
        }
        else if(op>5 || op<1){
            goto def;
        }
        printf("enter number1: ");
        scanf("%f",&n1);
        printf("enter number2: ");
        scanf("%f",&n2);
        switch (op) {
        case 1:
            printf("RESULT= %f",n1+n2); 
            break; 
        case 2:
            printf("RESULT= %f",n1-n2); 
            break;
        case 3:
            printf("RESULT= %f",n1*n2);
            break;
        case 4:
            if (n2 == 0) {
                printf("\nDivisor cannot be zero.");
            }
            else 
                printf("RESULT= %f",n1/n2);
            break;
        exit:
        case 5:
                printf("\nExiting the program");
                return 0;
        def:
        default:
            printf("Invalid operation\n");
        }
    } while (op != 5);
    return 0;
}