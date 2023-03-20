#include <stdio.h>
int fibrec(int n);
void fibnonrec(int n);

int main(void) {
  int choice,n;
  printf("Enter number of terms: ");
  scanf("%d", &n);
  printf("Enter 1 to generate the series using recursive function or 2 to use a non-recursive function: ");
  scanf("%d", &choice);
  if (choice == 1) {
    for(int i=0;i<n;i++) {
        printf("%d ",fibrec(i));
    }
  } 
  else if (choice == 2) {
    fibnonrec(n);
  } else {
    printf("Invalid choice.\n");
  }
return 0;
}
int fibrec(int n) {
  if (n == 0) return 0;
  if (n == 1) return 1;
  return fibrec(n - 1) + fibrec(n - 2);
}
void fibnonrec(int n) {
  int t1 = 0, t2 = 1, fib;
  printf("%d %d ",t1,t2);
  for (int i = 3; i <= n; i++) {
    fib = t1 + t2;
    printf("%d ",fib);
    t1 = t2;
    t2 = fib;
  }
}