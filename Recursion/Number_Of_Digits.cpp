/*
Given the number 'n', find out and return the number of digits present in a number recursively.
*/
int count(int n){
    //write your code here
    if(n<10)
        return 1;
    return 1+count(n/10);
}
