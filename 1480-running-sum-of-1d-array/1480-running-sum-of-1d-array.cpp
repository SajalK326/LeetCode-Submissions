class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> arr = {nums[0]};
        for(int i=1; i<nums.size(); i++){
            arr.emplace_back(nums[i] + arr[i-1]);
        }
        return arr;
    }
};