class Solution {
public:
    int minimumPushes(string word) {
        vector<int> frq(26,0);
        int ans=0;
        for(char ch:word){
            frq[ch-'a']++;
        }
        sort(frq.rbegin(),frq.rend());
        for(int i=0;i<26;i++){
            ans+=frq[i]*((i/8)+1);
        }
        return ans;
    }
};