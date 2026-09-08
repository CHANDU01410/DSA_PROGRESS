class Solution {
public:
long long MOD=1000000007;
    int countGoodNumbers(long long n) {
       long long even=(n+1)/2;
       long long odd=n/2;
       long long a=power(5,even);
       long long b=power(4,odd);
       return (a*b)%MOD;
       }
     
    
    long long power(long long x,long long n){
         if(n==0) return 1;
        long long half=power(x,n/2);
       
        if(n%2==0){
            return (half*half)%MOD;
        }
        return ((half*half)%MOD*x)%MOD;
    }
};