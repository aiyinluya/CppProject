#include "power.h"			//特别注意自己定义的函数头文件需要用引号括起来

double power(double base, int exponent)
{
    int result = base;
    int i;
    
    if (exponent == 0) {
        return 1;
    }
    
    for(i = 1; i < exponent; ++i){
        result = result * base;
    }
    return result;
}
