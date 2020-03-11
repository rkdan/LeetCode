#include <stdio.h>

int main() {
	int var = 20;
	int *ip = NULL;

	ip = &var;

	printf("Value of var variable: %d\n", var);
	printf("Address of var variable: %p\n", &var);
	printf("Address stored in ip variable: %p\n", ip);
	printf("Value of *ip variable: %d\n", *ip);

	/* assign a new value to the address*/

	var = 10;

	printf("Value of var variable: %d\n", var);
	printf("Address of var variable: %p\n", &var);
	printf("Address stored in ip variable: %p\n", ip);
	printf("Value of *ip variable: %d\n", *ip);

	return 0;
}