class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod = 1, prod_sec = 1;
        for(auto it:nums){
            if(it==0){
                prod_sec = prod;
                prod *= it;
            }
            else{
                prod *= it;
                prod_sec *= it;
            }
        }
        vector<int> ans;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i]==0){
                ans.push_back(prod_sec);
            }
            else{
                int num = prod/nums[i];
                ans.push_back(num);
            }
        }
        return ans;
    }
};
