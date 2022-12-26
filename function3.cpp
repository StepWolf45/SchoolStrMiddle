#include <iostream>
#include <string>
#include "middle_str.h"
using namespace std;

string itc_decToBase(int num, int base) {
    string bukv = "0123456789ABCDEF";
    string result = "";
    int ost = 0;
    if (num < 0) {
        result = "-";
        num *= -1;
    }
    while (num > 0) {
        ost = num % base;
        result = bukv[ost] + result;
        num /= base;
    }
    return result;
}

string itc_DecToBin(string str){
    string temp = "", temp2 = "";
    long long temp_num = 0;
    for(long long i = 0; str[i] != '\0'; ++i){
                if (str[i] < '0' || str[i] > '9'){
            temp2 += itc_decToBase(stoi(temp), 2) + str[i];
            temp = "";
        }
        if ( itc_isDigit(str[i]))
            temp += str[i];
    }

    temp2 += itc_decToBase(stoi(temp), 2);
    return temp2;
}