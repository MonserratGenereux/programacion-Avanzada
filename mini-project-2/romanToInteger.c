#include <stdlib.h>
#include <stdio.h>
#include "romanToInteger.h"
#include "string.h"

/** romanToInt
  * Receive a Roman number and converts it to integer 
  * Returns the cardinal number.
  * @param:
  *   romanNumber: Roman Number 
  * @return:
  *   int: Cardinal number.
 */

int romanToInt(char *romanNumber) {
#define _M 1000
#define _D 500
#define _C 100
#define _L 50
#define _X 10
#define _V 5
#define _I 1

    int result  = 0;
    int i;
    int last = _M;
    for(i = 0;i < strlen(romanNumber);i++)
    {
        switch (romanNumber[i])
        {
            case 'M':
                if(last >= _M){
                    result=result + _M;
                }else{
                    result=result + _M - (last << 1);
                }
                last = _M;        
            break;
            case 'D':
                 if(last >= _D){
                    result=result + _D;
                }else{
                    result=result + _D - (last << 1);
                }
                last = _D;
            break;
            case 'C':
                if(last >= _C){
                    result=result + _C;
                }else{
                    result=result + _C - (last << 1);
                }
                last = _C;
            break;
            case 'L':
                if(last >= _L){
                    result=result + _L;
                }else{
                    result=result + _L - (last << 1);
                }
                last = _L;
            break;
            case 'X':
                if(last >= _X){
                    result=result + _X;
                }else{
                    result=result + _X - (last << 1);
                }
                last = _X;
            break;
            case 'V':
                if(last >= _V){
                    result=result + _V;
                }else{
                    result=result + _V - (last << 1);
                }
                last = _V;
            break;
            case 'I':
                if(last >= _I){
                    result=result + _I;
                }else{
                    result=result + _I - (last << 1);
                }
                last = _I;
            break;
        }
        
    }
    printf("%d\n", result);
    return result;
}