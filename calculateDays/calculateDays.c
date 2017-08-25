#include <stdlib.h>
#include <stdio.h>
#include "calculateDays.h"

int daysPerMonth[]={31,28,31,30,31,30,31,31,30,31,30,31};

 int calculateDays(Month month,int monthDay){
	int days =0;
	Month i;
	for(i=Jan; i<month; i++){
		days += daysPerMonth[i];
	}
	days += monthDay;
	return days;
}

