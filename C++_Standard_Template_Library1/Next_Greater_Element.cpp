/*
Given an array, print the Next Greater Element (NGE) for every element. The Next greater Element for an element x, is the first greater element
 on right side of x in the array. Elements for which no greater element exist, consider next greater element as -1.
*/

#include <bits/stdc++.h>
vector<int> nextGreaterElement(vector<int> input) {
	// Write your code here
    int sz = input.size();
    vector<int> result(sz, -1);
    stack<int> s;
    
    for(int i=sz-1; i>=0; i--){
        while(!s.empty()){
            if(input[i]<s.top()){
                result[i] = s.top();
                break;
            }
            s.pop();
        }
        s.push(input[i]);
    }
 
    return result;
}
