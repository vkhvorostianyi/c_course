#include <stdio.h>

int main() {
 int i,j;
 int *p;
 p = &i;
 *p=5;
 j=i;
 printf("%d %d %d\n", i,j,*p);
 return 0;
}
