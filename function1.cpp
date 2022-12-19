#include <iostream>
#include <string>
#include "middle_str.h"

long long itc_len(string str) {
    long long kol = 0;
    for (int i = 0; str[i]!='\0'; i++) {
        kol++;
    }
    return kol;
}
//--------------------------------------------
bool itc_isDigit(unsigned char c){
    if((c>='0') && (c<='9')){
        return 1;
    }
    return 0;
}
unsigned char itc_toUpper(unsigned char c){
    if(c>='a' && c<='z'){
        return c-32;
    }
    return c;
}
unsigned char itc_changeCase(unsigned char c){
    if(c>='a' && c<='z'){
        return c-32;
    }
    if(c>='A' && c<='Z'){
        return c+32;
    }
    return c;

}
bool itc_compare(string s1, string s2){
    if(itc_len(s1)==itc_len(s2)){
        for(int i=0;i<itc_len(s1);i++){
            if(s1[i]!=s2[i]){
                return 0;
                break;
            }
        }
    } else{
        return 0;
    }
    return 1;
}
int itc_countWords(string str){
    int kol_word = 0;
    bool flag = true;
    for( long long i = 0; i<itc_len(str); ++i) {
        if ((str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z') && str[i] != ' '){
            flag = false;
        }
        if (str[i] == ' ' && flag == true) {
            kol_word += 1;
        }
        if (str[i] == ' ' && flag == false){
            flag = true;
        }
    }
    if(flag == false){
        return kol_word;
    }
    return kol_word + 1;
}