class Solution {
public:
    int pivotIndex(std::vector<int>& nums) {
        int total_sum = 0;
        int left_sum = 0;
        
        // Calculate the total sum of the array
        for (int num : nums) {
            total_sum += num;
        }
        
        // Iterate through the array to find the pivot index
        for (int i = 0; i < nums.size(); ++i) {
            // Right sum is total_sum minus the current element and left_sum
            int right_sum = total_sum - left_sum - nums[i];
            
            // Check if the left sum equals the right sum
            if (left_sum == right_sum) {
                return i; // Found the pivot index
            }
            
            // Update the left sum for the next iteration
            left_sum += nums[i];
        }
        
        return -1; // No pivot index found
    }
};
