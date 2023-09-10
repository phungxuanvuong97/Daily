//
// Created by phung vuong on 04/09/2023.
//

#include "ValidParenthese.h"
#include "../../common/data_structure/queue/sc_queue.h"
#include "../../common/string/StringUltils.h"
#include "../../common/printing/printing.h"

int isValidCharacter(char s){
    if(s == '[' || s == '(' || s == '{' || s == ']' || s == ')' || s == '}'){
        return 1;
    }
    else{
        return -1;
    }
}

char getParenthese(char i){
    switch (i) {
        case ')':{
            return '(';
        }
        case '}':{
            return '{';
        }
        case ']':{
            return '[';
        }
        default:{
            return '\0';
        }
    }
}

int isValid(char * s){

    struct sc_queue_char queue;

    sc_queue_init(&queue);

    int strLen = str_length(s);

    if(strLen < 2){
        return -1;
    }

    for(int i=0;i<strLen;i++){
        char currentChar = s[i];
        if(currentChar == '[' || currentChar == '(' || currentChar == '{'){
            sc_queue_add_last(&queue, currentChar);
        }
        else if(currentChar == ']' || currentChar == ')' || currentChar == '}'){
            char lastElement  = sc_queue_del_last(&queue);
            char currentCounter = getParenthese(currentChar);
            if(lastElement != '\0'){

                if(lastElement == currentCounter){
                    continue;
                }
                else{
                    return -1;
                }
            }
        }
    }
    char lastElement = sc_queue_peek_first(&queue);
    char isValid = isValidCharacter(lastElement);

    if(isValid){
        return -1;
    }
    return 1;
}



void RunValidParenthese(){
    char* input = "()";

    int result = isValid(input);

    PRINT_INT_VARIABLE_INFO(result);
}