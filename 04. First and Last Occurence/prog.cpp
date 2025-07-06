// First and Last Occurrence
// GFG - implement first and last occurrence

class Solution {
  public:
    int firstPos(vector<int>& nums,int target){
            int n = nums.size();
            int low = 0;
            int high = n-1;
            while(low<=high){
                int mid = low +((high-low)/2);
                if(nums[mid]==target){
                    if(mid==0 || nums[mid-1]!=target)return mid;
                    else high = mid-1;
                }
                else if(nums[mid]>target) high = mid-1;
                else low = mid+1;
            }
            return -1;
        }

        int lastPos(vector<int>& nums,int target){
            int n = nums.size();
            int low = 0;
            int high = n-1;
            while(low<=high){
                int mid = low +((high-low)/2);
                if(nums[mid]==target){
                    if(mid==n-1 || nums[mid+1]!=target)return mid;
                    else low= mid+1;
                }
                else if(nums[mid]>target) high = mid-1;
                else low = mid+1;
            }
            return -1;
        }
    vector<int> find(vector<int>& arr, int x) {
        vector<int>ans;
        ans.push_back(firstPos(arr,x));
        ans.push_back(lastPos(arr,x));
        return ans;
        
    }
};