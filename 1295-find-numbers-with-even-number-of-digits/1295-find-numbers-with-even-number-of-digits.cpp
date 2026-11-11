class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int lastdig=0, evencount=0;

        for (int i=0; i<nums.size(); i++){
            int digcount=0;
            
            while(nums[i] != 0){
                lastdig=nums[i] % 10;
                nums[i] /= 10;
                digcount++;
            }

            if (digcount % 2 == 0){
                evencount++;
            }
        }

        return evencount;
    }
};