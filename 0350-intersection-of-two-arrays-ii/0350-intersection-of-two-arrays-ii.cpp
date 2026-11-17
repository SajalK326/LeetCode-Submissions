class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        // Using Unordered Map

        unordered_map<int, int> counts;
        vector<int> intersection;

        for(auto iter:nums1){
            counts[iter]++;
        }

        for(auto iter:nums2){
            if(counts[iter]>0){
                intersection.emplace_back(iter);
                counts[iter]--;
            }
        }
        
        return intersection;
    }
};