class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i=0, ones=0, maxOnes=0;

        while(i < nums.size()){
            if(nums[i] != 1){
                ones=0;
            }
            else{
                ones++;
            }
            maxOnes=max(maxOnes, ones);
            i++;
        }
        return maxOnes;
    }
};