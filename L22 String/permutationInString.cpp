class Solution {
public:
    bool isSameFreq(int freq[26] , int wndFreq[26]){
        for(int i=0 ; i<26 ; i++){
            if(freq[i] != wndFreq[i]){
                return false;
            }
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        int freq[26] = {0};
        for(int i=0 ; i<s1.length() ; i++){
            freq[s1[i] - 'a']++;
        }

        int wndsize = s1.length();
        for(int i = 0 ; i<s2.length() ; i++){
            int wndIdx = 0;
            int idx = i;
            int wndFreq[26] = {0};
            while(wndIdx < wndsize && idx < s2.length()){
                wndFreq[s2[idx] - 'a']++;
                wndIdx++;
                idx++;
            }

            if(isSameFreq(freq, wndFreq)){
                return true;
            }
        }
        return false;
    }
};
