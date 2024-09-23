class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        // BASE CASES:------
        if(n==0 || n==1){
            return false;
        }
        sort(nums.begin(),nums.end());
        int count = 0;
        for(int i=1;i<=n-1;i++){
            if(nums[i-1]==nums[i]){
                return true;
            }
        }
        return false;
    }
};
