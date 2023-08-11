class Solution {
public:
    int search(vector<int>& nums, int target) {
        int right = nums.size() - 1;
        int left = 0;

        while(left <= right)
        {
            int m = (left + right) / 2;
            if(nums[m] == target)
                return m;
            
            if(nums[m] >= nums[left])
            {
                if(target >= nums[left] && nums[m] >= target)
                    right = m - 1;
                else
                    left = m + 1;
            }
            else
            {
                if(nums[right] >= target && target >= nums[m])
                    left = m + 1;
                else
                    right = m - 1;
            }
        }

        return -1;
    }
};