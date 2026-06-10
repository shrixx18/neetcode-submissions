class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        int longest = 0, len = 0;
        for(auto it:s){
            if(s.find(it-1)==s.end()){
                len = 0;
                while(s.find(it+len)!=s.end()){
                    len += 1;
                }
                longest = max(len, longest);
            }
        }
        return longest;
    }
};
