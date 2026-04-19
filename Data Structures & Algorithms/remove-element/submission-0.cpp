class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int l = 0, r = 0;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i]==val){
                r++;
            }
            else{
                swap(nums[i],nums[l]);
                l++;
                r++;
            }
        }
        return l;
    }
};