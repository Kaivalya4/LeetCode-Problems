class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start= 0;
        int end = nums.size()-1;
        while(start+1<end){
            int mid = (start+end)/2;
            if(nums[mid] == target)
                return mid;
            else if(nums[mid] > target)
                end = mid-1;
            else
                start = mid+1;
        }
        if(nums[start] == target)
            return start;
        if(nums[end] == target)
            return end;
        return -1;
    }
};