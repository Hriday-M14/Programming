/*
You are given three rods (numbered 1 to 3), and ‘N’ disks initially placed on the first rod, one on top of each other in increasing order of size 
( the largest disk is at the bottom). You are supposed to move the ‘N’ disks to another rod(either rod 2 or rod 3) using the following rules and in less than 
2 ^ (N) moves.
*/


void towerOfHanoi(int n, int from, int to, vector<vector<int>>& ans){
  if(n==0)
    return;
  int rem = 1^2^3^from^to;
  towerOfHanoi(n-1, from, rem, ans);
  ans.push_back({from, to});
  towerOfHanoi(n-1, rem, to, ans);
}
vector<vector<int>> towerOfHanoi(int n) {
  //    Write your code here.
  vector<vector<int>> ans;
  towerOfHanoi(n, 1, 3, ans);
  return ans;  
}