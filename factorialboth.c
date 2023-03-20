#include <stdio.h>
int recfact(int n);
int nonrecfact(int n);
int main(void) {

  int n, choice;
  printf("Enter the number: ");
  scanf("%d", &n);
  
  printf("Enter 1 to use recursive function or 2 to use non-recursive function: ");
  scanf("%d", &choice);
  
  if (choice == 1) {
    printf("Factorial of %d using recursion is %d\n", n, recfact(n));
  } else if (choice == 2) {
    printf("Factorial of %d without recursion is %d\n", n, nonrecfact(n));
  } else {
    printf("Invalid choice.\n");
  }

  return 0;
}

int recfact(int n) {
  if (n == 0) {
    return 1;
  }
  return n * recfact(n - 1);
}

int nonrecfact(int n) {
  int result = 1;
  for (int i = 1; i <= n; i++) {
    result *= i;
  }
  return result;
}