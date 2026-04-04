class Solution {
public:
    int search(vector<int>& nums, int target) {
        int ans;
        int n=nums.size();
       
        int low=0;
        int high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(target>nums[mid]){
                low++;
            }
            else{
                high--;
            }
        }
        return -1;
        
    }
};
