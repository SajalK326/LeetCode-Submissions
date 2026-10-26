class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> arr;

        for (int k=0; k<nums.size(); k++){
            arr.push_back({nums[k], k});
        }

        sort(arr.begin(), arr.end());
        int i=0,j=arr.size()-1;

        while(i < j){
            int intsum=arr[i].first + arr[j].first;
            if(intsum == target){
                return {arr[i].second,arr[j].second};
            }
            else if(intsum < target){
                i++;
                continue;
            }
            else if(intsum > target){
                j--;
                continue;
            }
        }
        return {};
    }
};