class Solution {
public:
    double myPow(double x, int n) {
        // long long N=n;
        // if(N<0){
        //     x=1/x;
        //     N=-N;
        // }
        // double ans=1;
        // while(N>0){
        //     if(N%2==1){
        //         ans=ans*x;
        //     }
        //     x=x*x;
        //     N=N/2;
        // }
        // return ans;

        long long N = n;
        if (N < 0) {
            x = 1 / x;
            N = -N;
        }
        return power(x, N);
    }
    double power(double x, long long n) {
        if (n == 0)
            return 1;
        double half = power(x, n / 2) ;
            if (n % 2 == 0) {
                return half * half;
            }
            return half * half * x;
        
    }
};