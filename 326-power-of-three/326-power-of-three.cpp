class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0){
            return false ;
        }
        if(n==1){
            return true;
        }
        unsigned long long int i=1;
        while(i<=n){
            i=i*3;
            if(n==i){
                return true;
            }
        }
        return false;
    }
};