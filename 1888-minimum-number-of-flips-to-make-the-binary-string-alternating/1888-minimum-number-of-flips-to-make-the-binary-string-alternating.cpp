class Solution {
public:
    /*
    MY SOLUTION
    
    char charflip(char expected){
    if(expected=='0'){
        return '1';
    }
    else return '0';
}

int flips(string s , char expected){
    int countflips = 0 ;
    for(int i = 0 ; i< s.length() ; i++){
        if(s[i]!=expected){
            ++countflips ;
        }
        expected = charflip(expected) ;
    }
    return countflips;
}
int minFlips(string s){
    int ans1= flips(s, '0') ;
    int ans2= flips(s , '1') ;
    int ans = min(ans1 , ans2) ;
    return ans;
    */
    int minFlips(string s) {
        int n = s.length();
        
        int diff1 = 0, diff2 = 0;
        
        if (n&1) s = s+s;
        
        int ws = 0;
        int result = INT_MAX;
        for (int we = 0; we < s.length(); ++we) {
            if ((s[we] =='1') ^ (we&1)) {
                diff1++;
            } else {
                diff2++;
            }
            
            if (we - ws + 1 == n) {
                result = min(result, min(diff1, diff2));
                if (result == 0) break;
                if ((s[ws] =='1') ^ (ws&1)) {
                    diff1--;
                } else {
                    diff2--;
                }
                ws++;
            }
        }
        return result;
}
};