class Solution {
public:
    int gcd(int a,int b){
        while(b!=0){
            int rem=a%b;
                a=b;
                b=rem;
        }
        return a;
    }
    int gcdOfOddEvenSums(int n) {
        int evenSum=n*(n+1);
        int oddSum=n*n;
        return gcd(evenSum,oddSum);
    }
};