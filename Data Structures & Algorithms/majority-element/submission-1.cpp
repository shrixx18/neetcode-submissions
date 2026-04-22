class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        // int maj = n/2;
        // unordered_map<int, int> mp;
        // for(int i = 0; i<n; i++){
        //     mp[nums[i]]++;
        // }
        // for(auto it : mp){
        //     if(it.second>maj) return it.first;
        // }
        // return -1;
        int count = 0;
        int maj = -1;
        for(auto it : nums){
            if(count==0){
                maj = it;
                count++;
            }
            else{
                if(maj==it){
                    count++;
                }
                else{
                    count--;
                }
            }
        }
        return maj;
    }
};