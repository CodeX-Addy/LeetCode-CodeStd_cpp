class Solution {
public:
    bool isAnagram(string s, string t) {
        //sort(s.begin(), s.end()); Brute force approach
        //sort(t.begin(), t.end());

        //if(s==t) return true;
        //else return false;
        int freqTable[256] = {0};
        for(int i=0; i<s.size(); ++i){
            freqTable[s[i]]++;
        }
         for(int i=0; i<t.size(); ++i){
            freqTable[t[i]]--;
        }

        for(int i=0; i<256; i++){
            if(freqTable[i] != 0) return false;
        }
        return true;
    }
};
