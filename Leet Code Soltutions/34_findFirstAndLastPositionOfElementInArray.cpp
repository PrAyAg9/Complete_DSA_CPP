class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int s = 0;
        int e = nums.size() - 1;
        int findex = -1, lindex = -1;
        if(nums.size() == 0){
            return {findex,lindex};
        }
        if(e==0 && nums[0]==target){
            return {0,0};
        }
        while(s<=e){
            int mid = e + (s-e)/2;
            cout<<"mid - "<<mid<<endl;
            if(nums[mid] == target){
                for(int i=mid;i>=0;i--){
                    cout<<"nums[ mid]"<<nums[mid]<<endl;
                    cout<<"lindx  i--"<<i<<endl;
                    findex = i;
                    if(nums[i]!=target){
                        findex = i+1;
                        break;
                    }
                }
                for(int i=mid;i<=e;i++){
                    lindex = i;
                    if(nums[i]!=target){
                        lindex = i-1;
                        break;
                    }
                }
                break;
            }
            else if(nums[mid]>target){
                e = mid -1;
            }
            else{
                s = mid + 1;
            }
        }
        return {findex,lindex};
    }
};
