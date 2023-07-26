class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        unordered_map<int, int> numMap;
        int n = nums.size();

        for(int i = 0; i < n ; ++i)
        {
            if(false == numMap.count(target - nums[i]))
            {
                numMap[nums[i]] = i;
            }
            else
            {
                return {numMap[target - nums[i]] ,i};
            }
        }


        return {};
    }
};