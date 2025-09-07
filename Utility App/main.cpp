#include <bits/stdc++.h>
using namespace std;


// ============ Utility Helpers ============
static string currency = "\xE2\x82\xA6"; // UTF-8 Naira symbol ₦


string toUpperStr(string s){
for(char &c : s) c = toupper(static_cast<unsigned char>(c));
return s;
}


bool isWholeNumber(const string &s){
if(