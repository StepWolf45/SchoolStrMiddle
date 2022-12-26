#include <iostream>
#include <string>
#include "middle_str.h"

int itc_find_str(string str1, string str2){
    int length1 = itc_len(str1);
    int length2 = itc_len(str2);
    for (int i = 0; i < length1; ++i) {
        if(str1[i]==str2[0]){
            int j=0;
            for (int r=i; r < length1 && j < length2; r++, j++){
                if (str1[r] != str2[j]) {
                    return 0;
                }
            }
        }
    }
    return -1;
}
//---------------------------------------
string itc_maxCharWord(string str) {
    int max = 0;
    int length = itc_len(str);
    string time_str, final;
    if (itc_countWords(str) == 1) {
        return "error";
    }
    for (int i = 0; i < length; i++) {
        if (((str[i] >= 'A') && (str[i] <= 'Z')) || ((str[i] >= 'a') && (str[i] <= 'z'))) {
            time_str += str[i];
        }
        else if (itc_len(time_str) > max) {
            max = itc_len(time_str);
            final = time_str;
            time_str = "";
        }
        else {
            time_str = "";
        }
    }
    if (itc_len(time_str) > max) {
        final = time_str;
    }
    return final;
}
char itc_sameChar(string str){
    int kol=0;
    for (int i = 0; i < itc_len(str); ++i) {
        for (int j = 0; j < itc_len(str); ++j) {
            if(str[i]==str[j]){
                kol++;
                if(kol==2){
                    return str[i];
                }
            }
        }
    }
    return 0;
}
bool itc_isFirstInSecond(string s1, string s2){
    return itc_find_str(s1, s2) == -1;
}