// Subsets

class Solution {
  public:
     void printSubset(vector<int>&arr,int n,int idx,vector<int>&st,vector<vector<int>>&ans){ 
        if(idx==n){
            ans.push_back(st);
            return;
        }
        printSubset(arr,n,idx+1,st,ans); // left side --> pick
        st.push_back(arr[idx]);
        printSubset(arr,n,idx+1,st,ans); // right side --> not pick
        st.pop_back(); // backtrack to
    }
    
    vector<vector<int>> subsets(vector<int>& arr) {
         sort(arr.begin(), arr.end());
        vector<vector<int>>ans;
        vector<int>st;
        printSubset(arr,arr.size(),0,st,ans);
         sort(ans.begin(), ans.end());
        return ans;
        
    }
};