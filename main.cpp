#include <cstdio>
#include "sum.h"
int main() {
	int n;
	printf("Enter Number: ");
	scanf("%d", &n);
	int s = sum(n);
	printf("Sum = %d\n", s);
}
