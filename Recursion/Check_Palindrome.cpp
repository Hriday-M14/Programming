/*
Check whether a given String S is a palindrome using recursion. Return true or false.
*/

#include<cstring>
bool check(char input[], int s, int e)
{
    if(s>=e)
        return true;
    if(input[s]==input[e]){
        return check(input, s+1, e-1);
    }
    return false;
}
bool checkPalindrome(char input[]) {
    // Write your code here
    int len = strlen(input);
    return check(input, 0, len-1);
}


