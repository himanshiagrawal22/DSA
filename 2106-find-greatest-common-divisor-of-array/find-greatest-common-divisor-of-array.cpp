class Solution {
public:
    int gcd(int a,int b){
        while(b){
            int rem=a%b;
                a=b;
                b=rem;
        }
        return a;
    }
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int minn=nums[0];
        int maxn=nums[nums.size()-1];
        return gcd(minn,maxn);
    }
};