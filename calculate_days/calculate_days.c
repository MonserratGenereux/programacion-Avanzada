#include <stdlib.h>
#include <stdio.h>
#include "calculate.h"
#include <assert.h>


/*
	*calculateDays
	*Given a month and day of the month return the number of days
	*@param:
		*month: currentMonth
		* monthDay: day of the month
	*@return:
		*integer number of days
*/

 int calculateDays(Month currentMonth,int monthDay, int year){
 	int daysPerMonth[]={31,28,31,30,31,30,31,31,30,31,30,31};
 	int daysPerMonthLeap[]={31,29,31,30,31,30,31,31,30,31,30,31};
 	int days = monthDay;
	Month i;

	assert(year >0);

	if(isLeapYear(year)){
		daysPerMonth[Feb]+=1;
	}

 	assert(monthDay >= 1 && monthDay <= daysPerMonth[currentMonth]);
 	//lo que esta adentro si no se cumple el programa muere

	for(i=Jan; i<currentMonth; i++){
		days += daysPerMonth[i];
	}

	return days;
}

/*
	*isLeapYear
	*Given year return  1 is a leap year else return 0
	*@param:
		*year: year
	*@return:
		*integer : 1 || 0
*/

int isLeapYear(int year){
	assert(year > 0 );
	if((year % 4 == 0 && (year % 100 !=0)) || (year % 400 == 0)){
		return 1;
	}else{
		return 0;
	}
}