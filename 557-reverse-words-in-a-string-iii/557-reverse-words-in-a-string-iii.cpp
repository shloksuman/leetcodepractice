class Solution {
public:
    string reverseWords(string s) {
     int i = 0  ;
     int N = s.length() ;
     string result;
     while(i<N){
        while(i<N && s[i]==' '){
            i++;
        }
        if(i>=N) break;
        int j=i+1;
        while(j<N && s[j]!=' '){
            j++;
        }
        string sub = s.substr(i , j-i) ;
         int len = sub.length() ;
          for(int m=0 ; m<len/2 ; m++){
              swap(sub[m] , sub[len-m-1]) ;
          }
        if(result.length()==0){
            result = sub ;
        }
        else {
            result = result + " " + sub ;
        }
        
        i = j+1 ;
    }
        return result;
    }
};