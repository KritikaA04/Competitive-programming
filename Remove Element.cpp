class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // for(int i=nums.begin();i<nums.end();i++)
        // {
        //     if(num[i]==val)
        //     {
        //         nums[i+1]=nums[i];
        //     }
        // }
        
        int j=0;
    
    for(int i=0;i<nums.size();i++){
        if(nums[i]!=val){
            nums[j]=nums[i];
            j++;
        }
    }
    return j;
    }
};