class Solution {
public:
    int firstOccur(vector<int>& nums,int target){
            int start=0;
            int end=nums.size()-1;
            int idx=-1;
            while(start<=end){
                int mid=start+(end-start)/2;
                if(nums[mid]==target){
                    idx=mid;
                    end=mid-1;
                }
                else if(target>nums[mid]){
                    start=mid+1;
                }
                else{
                    end=mid-1;
                }
            }
            return idx;
        }

        int lastOccur(vector<int>& nums,int target){
            int start=0;
            int end=nums.size()-1;
            int idx=-1;
            while(start<=end){
                int mid=start+(end-start)/2;
                if(nums[mid]==target){
                    idx=mid;
                    start=mid+1;
                }
                else if(target>nums[mid]){
                    start=mid+1;
                }
                else{
                    end=mid-1;
                }
            }
            return idx;
        }

    vector<int> searchRange(vector<int>& nums, int target) {
        int first=firstOccur(nums,target);
        int last=lastOccur(nums,target);
        return {first,last};
    }
};