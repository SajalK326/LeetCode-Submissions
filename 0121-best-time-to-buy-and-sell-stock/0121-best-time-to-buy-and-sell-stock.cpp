class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int pmax=0, best=*prices.begin();

        for (int i=1; i<prices.size(); i++){
            if(prices[i]>best){
                pmax=max(pmax, prices[i]-best);
            }
            best=min(best, prices[i]);
        }

        return pmax;
    }
};