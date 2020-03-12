#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

bool isPalindrome(int x);

int main() {
	int x = 10;
	int result = isPalindrome(x);
	printf("%d\n", result);
}


bool isPalindrome(int x) {
	int rev = 0;
	int rem = 0;
	int original = x;
	bool result;
	if (x < 0) {
		return false;
	}
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
	if (rev == original) {
		result = true;
	}
	else {
		result = false;
	}
	
	return result;
		
}