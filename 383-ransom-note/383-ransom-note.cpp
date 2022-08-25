class Solution {
public:
    /*
     public boolean canConstruct(String ransomNote, String magazine) {
        int[] freq = new int[26];
        for(char c: magazine.toCharArray()) freq[c-'a']++;
        for(char c: ransomNote.toCharArray()) {
            if(freq[c-'a'] == 0) return false;
            freq[c-'a']--;
        }
        return true;
    }
    
    */
    
    bool canConstruct(string ransomNote, string magazine) {
          // you can also use unordered_map<int, int> m; here
		// since we're just dealing with lowercase English letters, 
        // we can just use an array of length 26 to store the frequency of them
        int m[26] = {0};
        // count each character
        for(char c : magazine) m[c - 'a']++;
        // check if it can be found in m and substract by 1 
        for(char c : ransomNote) {
			// if it is less than 0, it means it cannot be constructed from magazine
            if(--m[c - 'a'] < 0) return false;
        }
        return true;
    }
};