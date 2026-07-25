class Solution {
public:
    int maxProduct(int n) {
        int larg=0;
        int secondlarg=0;
        while(n){
            int digit=n%10;
            if(digit>larg){
                secondlarg=larg;
                larg=digit;
            }
            else if(digit>secondlarg){
                secondlarg=digit;
            }
            n/=10;
        }
        return larg*secondlarg;
    }
};