// GFG - Smallest Positive Missing Number

class Solution {
  public:
    int missingNumber(vector<int> &nums) {
        sort(nums.begin(),nums.end()); // -1 1 3 4
        int res=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==res) res++;
            else if (nums[i]>res) break;
        }
        return res;
    }
};