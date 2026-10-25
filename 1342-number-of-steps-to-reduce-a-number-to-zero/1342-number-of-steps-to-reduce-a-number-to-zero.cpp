class Solution {
public:
    int numberOfSteps(int num) {
        int c=0;
        while(num != 0){
            while(num%2==0){
                num=num/2;
                c++;
            }
            while(num%2 != 0){
                num=num-1;
                c++;
            }
        }
        return c;
    }
};