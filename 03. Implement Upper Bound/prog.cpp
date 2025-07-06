// GFG - implement upper bound
// Problem Statement - Given a sorted array arr[] and a number target, the task is to find the upper bound of the target in this given array. The upper bound of a number is defined as the smallest index in the sorted array where the element is strictly greater than the given number.
// Note: If all the elements in the given array are smaller than or equal to the target, the upper bound will be the length of the array.

// Example 1:
// Input: arr[] = {1, 2, 8, 10, 10, 12}, target = 5
// Output: 2    

class Solution {
  public:
    int upperBound(vector<int>& arr, int target) {
        for(int i=0;i<arr.size();i++){
            if(arr[i]>target){
                return i;
            }
        }
        return arr.size();
    }
};