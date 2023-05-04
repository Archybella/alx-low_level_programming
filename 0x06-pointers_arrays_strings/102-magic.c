#include <stdio.h>

int main(void)
{
	int n;
int a[5];
int *p = &a[0]; // initialize pointer to point to the first element of a

a[2] = 1024;
*(p + 2) = 98; // access third element of a via pointer arithmetic

printf("a[2] = %d\n", a[2]);
}
