//
// Created by phung vuong on 03/09/2023.
//

#include <stdlib.h>
#include "LongestCommonPrefix.h"
#include "../../common/string/StringUltils.h"
#include "../../common/printing/printing.h"

char * longestCommonPrefix(char ** strs, int strsSize){

    char* result = malloc(sizeof (char) * strsSize);

    int index = 0;

    while(1){

        int isCommon = 1;

        if(strsSize == 1){
            return strs[1];
        }

        if(strsSize == 0){
            return "";
        }

        for(int i=0;i<strsSize-1;i++){

            if(strs[i][index] != strs[i+1][index] || strs[i][index] == '\0' || strs[i+1][index] == '\0'){
                isCommon = -1;
                break;
            }

        }

        if(isCommon == 1){
            result[index] = strs[0][index];
            index++;
        }
        else{
            result[index] = '\0';
            break;
        }


    }

    return  result;
}


void RunLongestCommonPrefix(){
    char**  strs = {"dog","racecar","car"};

    char* result = longestCommonPrefix(strs, 3);

    PRINT_STRING_VARIABLE_INFO(result);
}