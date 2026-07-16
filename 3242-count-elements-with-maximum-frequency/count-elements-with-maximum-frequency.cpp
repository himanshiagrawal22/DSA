class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int x:nums){
            mp[x]++;
        }
        int maxFreq=0;
        for(auto &x:mp){
            maxFreq=max(maxFreq,x.second);
        }
        int ans=0;
        for(auto &x:mp){
            if(maxFreq==x.second){
                ans+=x.second;
            }
        }
        return ans;
    }
};