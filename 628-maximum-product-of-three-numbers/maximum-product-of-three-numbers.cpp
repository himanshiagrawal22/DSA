class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        long long res1=nums[n-1]*nums[n-2]*nums[n-3]*1LL;
        long long res2=nums[0]*nums[1]*nums[n-1]*1LL; 
        return max(res1,res2);
    }
};