// Tower of Hanoi 

class Solution {
  public:
    int towerOfHanoi(int n, int from, int to, int aux) {
        if(n==0) return 0;
        return pow(2,n)-1;
    }
};