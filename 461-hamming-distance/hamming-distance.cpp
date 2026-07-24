class Solution {
public:
    int hammingDistance(int x, int y) {
        int newxor=x^y;
        int count=0;
        while(newxor>0){
            count+=newxor%2;
            newxor/=2;
        }
        return count;
    }
};