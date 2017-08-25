#ifdef __CALCULATE_DAYS__
#define __CALCULATE_DAYS__
typedef enum month {Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sept, Oct, Nov, Dec} Month;
//Month es un alias de enum month

int calculateDays(Month,int);
#endif