class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> num;
        for(int i = 0; i<nums.size(); ++i)
            num[nums[i]]++;
        
        for(const auto& it : num)
        {
            if(1 == it.second)
                return it.first;
        }
        
        return 0;
    }
};