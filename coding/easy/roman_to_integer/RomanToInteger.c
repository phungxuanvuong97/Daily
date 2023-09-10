//
// Created by phung vuong on 03/09/2023.
//

#include "RomanToInteger.h"
#include "../../common/string/StringUltils.h"
#include "../../common/printing/printing.h"


int getValueOfRoman(char s){
    switch (s)
    {
        case 'M':
        {
            return 1000;
        }
        case 'D':{
            return 500;
        }
        case 'C':{
            return 100;
        }
        case 'L':{
            return 50;
        }
        case 'X':{
            return 10;
        }
        case 'V':{
            return 5;
        }
        case 'I':{
            return 1;
        }
        default:{
            return -1;
        }
    }
}

int romanToInt(char * s)
{
    int lenth = str_length(s);

    int result = 0;

    if(lenth < 1){
        return -1;
    }

    if(lenth == 1){
        return getValueOfRoman(s[0]);
    }

    for(int i=0;i<lenth;i++){
        char currentChar = s[i];
        char nextChar = s[i+1];
        int valueOfCurrentChar = getValueOfRoman(currentChar);
        int valueOfNextChar = getValueOfRoman(nextChar);

        if(valueOfCurrentChar > valueOfNextChar){
            result += valueOfCurrentChar;
        }
        else if(valueOfCurrentChar == valueOfNextChar){
            result += valueOfCurrentChar;
        }
        else{
            result  += valueOfNextChar - valueOfCurrentChar;
            i++;
        }

    }

    return result;
}


void RunRomanToInt(){
    char* s = "MCMXCIV";

    int result = romanToInt(s);

    PRINT_INT_VARIABLE_INFO(result);
}