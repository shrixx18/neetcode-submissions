class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // int n = nums.size();
        // unordered_map<int, int> mp;
        // for(int i = 0; i<n; i++){
        //     mp[nums[i]]++;
        // }
        // for(auto &pair:mp){
        //     if(pair.second>1) return true;
        // }
        // return false;
        unordered_set<int> s;
        for(int i:nums){
            if(s.find(i)!=s.end()){
                return true;
            }
            else{
                s.insert(i);
            }
        }
        return false;
    }
};