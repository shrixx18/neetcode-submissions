class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map<int, int> mp;
        for(auto it:nums){
            mp[it]++;
        }
        
        vector<pair<int,int>> freq;
        for (auto it : mp) {
            freq.push_back({it.second, it.first});
        }
        sort(freq.begin(), freq.end(),
        [](pair<int,int> a, pair<int,int> b) {
            return a.first > b.first;
        });
        for (int i = 0; i < k; i++) {
            ans.push_back(freq[i].second);
        }

        return ans;
    }
};
