//
// Created by phung vuong on 10/09/2023.
//

#include <printf.h>
#include "ValidPalindrome.h"
#include "../../common/string/StringUltils.h"

int isPalindrome(char * s){
    int strLen = str_length(s);

    char* removedNonAlphanumeric = removeNonAlphanumericCharacters(s,strLen);

    int newStrLen = str_length(removedNonAlphanumeric);

    if(newStrLen <= 0){
        return 1;
    }

    toLowerCase(removedNonAlphanumeric, newStrLen);

    int i = 0;
    int j= newStrLen - 1;

    while (i < j){
        if(removedNonAlphanumeric[i] == removedNonAlphanumeric[j]){
            i++;
            j--;
            continue;
        }
        else{
            return -1;
        }
    }

    return 1;

}


void RunIsPalinDrome(){

    char* s1 = "A man, a plan, a canal: Panama";

    int result1 = isPalindrome(s1);

    printf("result1: %d \n", result1);

    char* s2 = "race a car";

    int result2 = isPalindrome(s2);

    printf("result2: %d \n", result2);

    char* s3 = " ";

    int result3 = isPalindrome(s3);

    printf("result3: %d \n", result3);
}