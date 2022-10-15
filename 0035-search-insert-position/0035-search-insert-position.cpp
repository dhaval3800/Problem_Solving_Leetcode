class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int s,e,mid;
        s= 0;
        e = nums.size()-1;
        while(s<=e){
            mid = s+ (e-s)/2;
            if(nums[mid]>target){
                e = mid-1;
            }
            else if(nums[mid]<target){
                s = mid+1;
            }
            else
                return mid;
        }
        return s;
    }
};