// Problem Statement - Given a sorted array arr[] and a number target, the task is to find the lower bound of the target in this given array. The lower bound of a number is defined as the smallest index in the sorted array where the element is greater than or equal to the given number.

// Note: If all the elements in the given array are smaller than the target, the lower bound will be the length of the array. 

// Example 1:
// Input: arr[] = {1, 2, 8, 10, 10, 12}, target = 5
// Output: 2
// Explanation: The lower bound of 5 is at index 2 where the element is 8.  
// Example 2:
// Input: arr[] = {1, 2, 8, 10, 10, 12}, target = 10
// Output: 3
// Explanation: The lower bound of 10 is at index 3 where the element is 10.

class Solution {
  public:
    int lowerBound(vector<int>& arr, int target) {
        for(int i=0;i<arr.size();i++){
            if(arr[i]>=target){
                return i;
            }
        }
        return arr.size();
    }
};