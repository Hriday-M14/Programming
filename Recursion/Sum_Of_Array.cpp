/*
Given an array of length N, you need to find and return the sum of all elements of the array.
Do this recursively.
*/
int sum(int input[], int n) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Return output and don't print it.
     Taking input and printing output is handled automatically.
  */
  if(n==0)
    return 0;
  return input[n-1] + sum(input, n-1);
}
