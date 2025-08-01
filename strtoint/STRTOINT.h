/*
ONLY 9 DIGITS CAN HANDLE!
"If you want to modify this code, You Can! feel free to use or modify this code anytime.""
Developer: BoomPlay/SyefC.
Language: C (pure C).
OS: Only in Windows.
COMPILER: MinGW GCC 32BIT works to on 64BIT
No copyright, feel free to change or fix or having fun on this code!.
*/



#include <string.h>
#include <math.h>
#include <ctype.h>

int convertstrint(char* pre_number)
{
int hold_num;
int result;
int pre_hold_num;
int pre_result = 0;
int PRE_BASE_TEN_HOLDER = 0;
int BASE_TEN_HOLDER = 0;
int GET_BASE_TEN = 0;
int INDEX = 0;
int TRUE = 1;
int ex = 1;
int calculation = 0;
int num[1000] = {0};
int power_of_9 = 9;
int indexar = 0;
INDEX = strlen(pre_number) - 1;



while(TRUE){
    GET_BASE_TEN = pre_number[INDEX] - 48;///3
    PRE_BASE_TEN_HOLDER = GET_BASE_TEN;//3, = 2
    GET_BASE_TEN = ex * PRE_BASE_TEN_HOLDER;// = 3 
    if(ex == 0){
        GET_BASE_TEN = pre_number[strlen(pre_number) - 1] - 48;
    }
    BASE_TEN_HOLDER = GET_BASE_TEN; //3
    num[indexar] = GET_BASE_TEN;
    INDEX--; //decrement index until finded a NULL Keyword
    indexar++;
    ex *= 10;
 if(INDEX <= -1){
    for(int calculate = 0; calculate != 1000; calculate++){
      calculation += num[calculate];
    }
    TRUE = 0;
    int result = calculation;
    return calculation;
 }
}

return pre_result;
}