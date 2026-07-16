class Solution {
public:
    int gcd(int a,int b){
        while(b!=0){
            int rem=a%b;
                a=b;
                b=rem;
        }
        return a;
    }
    long long gcdSum(vector<int>& nums) {
        int mx=0;
        vector<int> prefixGcd(nums.size());
        for(int i=0;i<nums.size();i++){
            mx=max(mx,nums[i]);
            prefixGcd[i]=gcd(nums[i],mx);
        }
        sort(prefixGcd.begin(),prefixGcd.end());
        long long ans=0;
        for(int i=0;i<prefixGcd.size()/2;i++){
            ans+=gcd(prefixGcd[i],prefixGcd[prefixGcd.size()-1-i]);
        }
        return ans;
    }
};