class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> res;
        sort(intervals.begin(), intervals.end());
        vector<int> ans = intervals[0];
        for(int i=0; i< intervals.size();i++){
            if(ans[1]>= intervals[i][0]){
                ans[1] = max(ans[1], intervals[i][1]);
            }
            else{
                res.push_back(ans);
                ans = intervals[i];
            }
        }
        res.push_back(ans);
        return res;

    }
};