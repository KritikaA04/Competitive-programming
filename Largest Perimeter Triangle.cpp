class Solution {
public:
    int check(int a, int b, int c){
        if(a >= b+c || b >= a+c || c >= a+b) return 0;
        else return 1;
    }
    int largestPerimeter(vector<int>& nums) {
    
        int i, j, z, ans = 0;
        sort(nums.begin(), nums.end());
        
        for(i=nums.size()-1; i>=2; i--){
            j = i-1;
            z = i-2;
            
            if(check(nums[i], nums[j], nums[z]) == 1){
                int tmp = nums[i] + nums[j] + nums[z];
                if(tmp > ans) ans = tmp;
            }
            else continue;
        }
        return ans;
    }

};