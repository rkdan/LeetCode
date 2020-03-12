#include <stdio.h>
#include <stdlib.h>

int* TwoSum(int* nums, int numsSize, int target);

int main(){

	int nums[5] = {-1, -2, -3, -4, -5};
	int target = -8;
	int numsSize = 5;
	int* res;
	int k;

	res = TwoSum(nums, numsSize, target);

	for (k = 0; k < 2; ++k){
		printf("%d\n", res[k]);
	}

}

int* TwoSum(int* nums, int numsSize, int target) {
	int* retArray = malloc(sizeof(int)*2);
	for (int i = 0; i < numsSize-1; i++) {
		for (int j = i+1; j < numsSize; j++) {
			if (nums[i] + nums[j] == target) {
				retArray[0] = i;
				retArray[1] = j;
				break;
			}
		}
	}	
	//*returnSize = 2;
	return retArray;
}