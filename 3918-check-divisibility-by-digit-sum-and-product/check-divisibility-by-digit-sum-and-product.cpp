class Solution {
public:
    bool checkDivisibility(int n) {
        int newn=n;
        int sum=0;
        int prod=1;
        while(n!=0){
            int num=n%10;
            sum+=num;
            prod*=num;
            n=n/10;
        }
        int res=0;
        int div=sum + prod;
        if(newn % div == 0){
            return true;
        }
        else{
            return false;
        }
    }
};