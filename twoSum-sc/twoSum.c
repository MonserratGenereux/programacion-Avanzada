#include <stdlib.h>
#include <stdio.h>
#include "twoSum.h"

int *getIndexes(int *nums, int target, int length){
	int i,j;
	int *result=(int *)calloc(2,sizeof(int));
	int candidate;
	int complement;
	for (i = 0; i < length-1; i++){
		if (nums[i]>=target){
			continue;
			//sigue a la siguiente iteracion
		}
		candidate = nums[i];
		complement = target - candidate;
		for (j = i+1; j < length; j++){
			if(nums[j] == complement){
				break;
				//termina el for
			}
		}
		if(nums[i]+nums[j]==target){
			result[0]=i;
			result[1]=j;
			return result;
		}
	}
	return result;
}
