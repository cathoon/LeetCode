class Solution {
public:
    int search(vector<int>& nums, int target) {
        unordered_map<int, int> numMap;
        for(int i = 0; i<nums.size(); ++i)
        {
            numMap[nums[i]] = i;
        }

        if (true == numMap.count(target))
            return numMap[target];

        return -1;
    }
};