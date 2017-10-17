#include <stdlib.h>
#include <stdio.h>
#include "romanToInteger.h"

int romanToInt(char *s) {
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
    for(i = 0;i < strlen(s);i++)
    {
        switch (s[i])
        {
            case 'M':
                result = (last >= _M ? result + _M:result + _M - (last << 1));
                last = _M;        
            break;
            case 'D':
                result = (last >= _D ? result + _D:result + _D - (last << 1));
                last = _D;
            break;
            case 'C':
                result = (last >= _C ? result + _C:result + _C - (last << 1));
                last = _C;
            break;
            case 'L':
                result = (last >= _L ? result + _L:result + _L - (last << 1));
                last = _L;
            break;
            case 'X':
                result = (last >= _X ? result + _X:result + _X - (last << 1));
                last = _X;
            break;
            case 'V':
                result = (last >= _V ? result + _V:result + _V - (last << 1));
                last = _V;
            break;
            case 'I':
                result = (last >= _I ? result + _I:result + _I - (last << 1));
                last = _I;
            break;
        }
        
    }
    printf("%d\n", result);
    return result;
}