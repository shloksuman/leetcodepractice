class Solution {
public:
    int binaryconverter(int n){
        //takes n and returns its binary value
        long long ans = 0 ;
        long long temp = 1;
        while(n>0){
            ans = ans + temp*(n%2) ;
            temp*=10;
            n/=2 ;
        }
        return ans;
    }
    int concatenatedBinary(int n) {
            long long int val= 0;
            int i=1 ;
            while(i<=n){
                val = (( val << (1+int(log2(i))))% 1000000007+i)% 1000000007;
                i++;
            }
        return val;
    }
};