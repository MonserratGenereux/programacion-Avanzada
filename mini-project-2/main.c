#include <stdlib.h>
#include <stdio.h>
#include "romanToInteger.h"

/* Add function signatures here */

int main(int argc, char **argv) {
	char * romanNumber;

	printf("Enter the number: ");
	scanf("%s", romanNumber);

	int number = romanToInt(romanNumber);
	printf("%d\n",number);
  return 0;
}
