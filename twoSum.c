#include <stdio.h>
#include <stdlib.h>
int * getIndex (int *nums, int target, int length){
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
	return NULL;
}
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
