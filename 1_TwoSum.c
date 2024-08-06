#include <stdio.h>
#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int *result = (int *)malloc(2 * sizeof(int)); // Allocate memory for the result array

    for (int i = 0; i < numsSize; i++) {
        int complement = target - nums[i];
        
        for (int j = 0; j < numsSize; j++) {
            if (i != j && nums[j] == complement) {
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                return result;
            }
        }
    }
