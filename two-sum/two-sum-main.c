#include <stdio.h>
#include "twoSum.h"
int main(){
	int nums[]= {2,7,11,15};
	int length = 4;
	int target = 9;
	int *result = getIndex(nums,target, length);
	//* para poder regresar mas de un valor
	if(result !=NULL && (nums[result[0]]+ nums[result[1]])==target){
		printf("It Works\n");
	}else{
		printf("Doesn't work\n");
	}
}
