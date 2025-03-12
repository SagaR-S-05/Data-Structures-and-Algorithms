#include<bits/stdc++.h>
using namespace std;
string intToRoman(int num) {
    string result = "";

    string thousand = "M";
    string five_hund = "D";
    string hundred = "C";
    string fifty = "L";
    string ten = "X";
    string five = "V";
    string one = "I";

    while (num != 0) {
        if (num >= 1000) {
            int q = num / 1000;
            for (int i = 0; i < q; i++) result += thousand;
            num %= 1000;
        }
        else if (num >= 900) {
            result += "CM";
            num -= 900;
        }
        else if (num >= 500) {
            result += five_hund;
            num -= 500;
        }
        else if (num >= 400) {
            result += "CD";
            num -= 400;
        }
        else if (num >= 100) {
            int q = num / 100;
            for (int i = 0; i < q; i++) result += hundred;
            num %= 100;
        }
        else if (num >= 90) {
            result += "XC";
            num -= 90;
        }
        else if (num >= 50) {
            result += fifty;
            num -= 50;
        }
        else if (num >= 40) {
            result += "XL";
            num -= 40;
        }
        else if (num >= 10) {
            int q = num / 10;
            for (int i = 0; i < q; i++) result += ten;
            num %= 10;
        }
        else if (num >= 9) {
            result += "IX";
            num -= 9;
        }
        else if (num >= 5) {
            result += five;
            num -= 5;
        }
        else if (num >= 4) {
            result += "IV";
            num -= 4;
        }
        else {
            for (int i = 0; i < num; i++) result += one;
            num = 0;
        }
    }

    return result;
}

int main()
{
    int num;
    cin>>num;
    cout<<intToRoman(num);
}