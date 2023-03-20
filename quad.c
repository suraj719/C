#include<stdio.h>
#include<math.h>
int main() {
    float a,b,c,discriminant,root1,root2,real,img;
    scanf("%f %f %f",&a,&b,&c);
    discriminant=b*b-(4*a*c);
    if(discriminant==0){
        root1=-b/2*a;
        root2=-b/2*a;
        printf("The roots of quadratic equation are %f and %f\n",root1,root2);
    }
    else if(discriminant>0) {
        root1=(-b + sqrt(discriminant)) /2*a;
        root2=(-b - sqrt(discriminant)) /2*a;
        printf("The roots of quadratic equation are %f and %f\n",root1,root2);
    }
    else {
        real=-b/(2*a);
        img=sqrt(-discriminant)/(2*a);
        printf("The roots of quadratic equation are %.2f+%.2fi and %.2f-%.2fi",real,img,real,img);
    }
}