//
// Created by phung vuong on 04/09/2023.
//

#include "LengthOfLastWord.h"
#include "../../common/string/StringUltils.h"
#include "../../common/printing/printing.h"

int lengthOfLastWord(char * s){

    int len = str_length(s);

    int rightIndex = len - 1;

    int count = 0;

    while(rightIndex >  0 && s[rightIndex] == ' '){
        rightIndex--;
    }

    while (rightIndex >= 0 && s[rightIndex] != ' ' ){
        count++;
        rightIndex--;
    }

    return count;

}
void RunLengthOfLastWord(){

    char* s1 = "Hello World";
    char* s2 = "   fly me   to   the moon  ";
    char* s3 = "luffy is still joyboy";
    char* s4 = "a";

    int result = lengthOfLastWord(s4);

    PRINT_INT_VARIABLE_INFO(result);
}