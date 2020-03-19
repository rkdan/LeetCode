#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int romanToInt(char *s);

int main() {

char number[] = "LVIII";

int result = romanToInt(number);
printf("Total: %d\n", result);

}

int romanToInt(char* s) {
	int n = strlen(s);
	int numArr[n];
	for (int i = 0; i < n; i++) {
		if (s[i] == 'M') {
			numArr[i] = 1000;
		}
		if (s[i] == 'D') {
			numArr[i] = 500;
		}
		if (s[i] == 'C') {
			numArr[i] = 100;
		}
		if (s[i] == 'L') {
			numArr[i] = 50;
		}
		if (s[i] == 'X') {
			numArr[i] = 10;
		}	
		if (s[i] == 'V') {
			numArr[i] = 5;
		}
		if (s[i] == 'I') {
			numArr[i] = 1;
		}
	}
	int k = 0;
	int total = numArr[n-1];
	for (int j = n-1; j > 0; j--) {
		k = j - 1;
		if ( ( numArr[k] < numArr[j] ) && (numArr[k] == 1 || numArr[k] == 10 || numArr[k] == 100) ) {
			total = total - numArr[k];
		}
		else {
			total = total + numArr[k];
		}		
	}
	return total;
}