#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

int ReverseInt(int x);

int main() {
	int x = 1534236;
	int result = ReverseInt(x);
	printf("%d\n", result);
}


int ReverseInt(int x) {
	int rev = 0;
	int rem = 0;
	while (x != 0) {
		rem = x % 10;
		if (rev > INT_MAX / 10){
			return 0;
		}
		if (rev < INT_MIN / 10){
			return 0;
		}
		rev = rev * 10 + rem;
		x = x/10;
	}

	return rev;
		
}