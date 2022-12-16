/*
Write a recursive function to convert a given string into the number it represents. 
That is input will be a numeric string that contains only numbers, you need to convert the string into corresponding integer and return the answer.
*/
#include<cstring>
int stringToNum(char input[], int len, int p)
{
    if(len==0)
        return 0;
    int ans = stringToNum(input, len-1, p*10) + (input[len-1] - '0')*p;
    input[len-1] = '\0';
    return ans;
}

int stringToNumber(char input[]) {
    // Write your code here
    int len = strlen(input);
    return stringToNum(input, len, 1);
}


