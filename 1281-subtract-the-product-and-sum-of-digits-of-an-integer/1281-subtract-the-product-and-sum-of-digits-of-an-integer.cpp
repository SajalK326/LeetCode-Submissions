class Solution {
public:
    int subtractProductAndSum(int n) {
        int dig=0, digsum=0, digprod=1;

        while(n>0){
            dig=n%10;
            n=n/10;

            digsum+=dig;
            digprod*=dig;
        }

        return digprod-digsum;
    }
};