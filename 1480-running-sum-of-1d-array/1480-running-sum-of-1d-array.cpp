class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> arr;
        for(int i=1; i<=nums.size(); i++){
            arr.emplace_back(accumulate(nums.begin(), nums.begin() + i, 0));
        }
        return arr;
    }
};