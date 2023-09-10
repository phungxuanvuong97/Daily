//
// Created by phung vuong on 03/09/2023.
//

#include <stdlib.h>
#include <assert.h>
#include <ctype.h>
#include <string.h>
#include "StringUltils.h"

int str_length(char str[]) {
    // initializing count variable (stores the length of the string)
    int count;

    // incrementing the count till the end of the string
    for (count = 0; str[count] != '\0'; ++count);

    // returning the character count of the string
    return count;
}

char* removeNonAlphanumericCharacters(char* s, int stringSize){

    assert(stringSize > 0);

    char* newString = malloc(sizeof(char) * stringSize);

    int currentIndex = 0;

    for(int i=0;i<stringSize;i++){
        if(isalpha(s[i]) || isdigit(s[i])){
            newString[currentIndex] = s[i];
            currentIndex++;
        }
    }

    if(currentIndex == 0){
        return strdup("");
    }

    newString = (char*)realloc(newString, sizeof (char) * currentIndex);
    return newString;

}

void toLowerCase(char* s, int strLen){
    assert(strLen > 0);

    for(int i=0;i<strLen;i++){
        if(s[i] != NULL){
            s[i] = tolower(s[i]);
        }
    }

}