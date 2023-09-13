//
// Created by phung vuong on 10/09/2023.
//

#include <stdio.h>
#include "TestStringUltis.h"
#include "StringUltils.h"

void RunTestStringUltils(){
    char *s1 = "A man, a plan, a canal: Panama";

    int strLen = str_length(s1);

    char *newS1 = removeNonAlphanumericCharacters(s1, strLen);

    printf("newS1: %s", newS1);

    char *s2 = "";

    char* newS2 = removeNonAlphanumericCharacters(s2, 0);

    printf("newS2: %s", newS2);

}