class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        unordered_map<int,int> map1;
        vector<int> v1;
        for(int i=0;i<nums.size(); i++)
        {
        if(map1.find(target-nums[i])!= map1.end())
        {
        v1.push_back(map1[target-nums[i]]);
        v1.push_back(i);
        return v1;
        } else
        {
        map1[nums[i]]=i;
        }
        }
        return v1;
    }
};