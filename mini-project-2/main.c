#include <stdlib.h>
#include <stdio.h>
#include "romanToInteger.h"

/* Add function signatures here */

int main(int argc, char **argv) {
	char romanNumber[20];

	printf("Enter the number: \n");
	scanf("%s", romanNumber);
	
	int number = romanToInt(romanNumber);
	printf("%d\n",number);
  return 0;
}
