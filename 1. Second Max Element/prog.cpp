Class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        int n = arr.size();
        if(n<2) return -1;
        
        int max = INT_MIN;int  smax = INT_MIN;
        for(int i=0;i<n;i++){
            if(arr[i]>max){
                smax = max;
                max = arr[i];
            }
            else if(arr[i]>smax && arr[i]<max){
                smax = arr[i];
            }
        }
        
        if(smax==INT_MIN) return -1;
        else return smax;
        
    }
};