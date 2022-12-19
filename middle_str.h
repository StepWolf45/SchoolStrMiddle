#include <iostream>
#include <string>
using namespace std;

#ifndef STRMIDDLE_MIDDLE_STR_H
#define STRMIDDLE_MIDDLE_STR_H

long long itc_len(string str);
bool itc_isDigit(unsigned char c);
unsigned char itc_toUpper(unsigned char c);
unsigned char itc_changeCase(unsigned char c);
bool itc_сompare(string s1, string s2);
int itc_countWords(string str);
string itc_maxCharWord(string str);
char itc_sameChar(string str);
bool itc_isFirstInSecond(string s1, string s2);

string itc_Cezar(string str, int k);
string itc_rmFreeSpace(string str);
bool itc_isIp(string str);

string itc_DecToBin(string str);
string itc_decToBase(int num, int base)

#endif //STRMIDDLE_MIDDLE_STR_H
