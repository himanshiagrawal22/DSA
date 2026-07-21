class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0;
        for(int j=0;j<nums.size();j++){                   
            if(nums[j]!=0){                    //0                        // i=1
                swap(nums[j],nums[i]);    
                i++;                          //  1 0
            }
           //i=
        }
    }
};