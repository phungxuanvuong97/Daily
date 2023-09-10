//
// Created by phung vuong on 04/09/2023.
//

#include "FirstOccurenet.h"
#include "../../common/string/StringUltils.h"
#include "../../common/printing/printing.h"

int strStr(char * haystack, char * needle){
    int needleLen = str_length(needle);
    int haystackLen = str_length(haystack);

    for(int i=0;i<haystackLen;i++){
        int runningIndex = i;
        int result = 1;
        for(int j=0;j<needleLen;j++){
            if(needle[j] == haystack[runningIndex]){
                runningIndex++;
                continue;
            }
            else{
                result = -1;
                break;
            }
        }
        if(result == 1){
            return i;
        }
    }

    return -1;
}

void RunFirstOccurent(){
    char* haystack = "leetcode", *needle = "leeto";

    int result = strStr(haystack, needle);

    PRINT_INT_VARIABLE_INFO(result)
}