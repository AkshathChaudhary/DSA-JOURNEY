class Solution {
public:

    bool isFreqSame(int freq1[],int freq2[]){ //O(1)
        for(int i=0;i<26;i++){
            if(freq1[i]!=freq2[i]){
                return false;
            }
        }

        return true;
    }



    bool checkInclusion(string s1, string s2) {
        int freq[26]={0};
        for(int i=0;i<s1.length();i++){
            freq[s1[i]-'a']++;
            
        }

        int winsize=s1.length();
        for(int i=0;i<s2.length();i++){
            int winidx=0,ind=i;
            int winfreq[26]={0};

            while(winidx<winsize && ind<s2.length()){
                winfreq[s2[ind]-'a']++;
                winidx++;ind++;
            }

            if(isFreqSame(freq,winfreq)){
                return true;
            }
        }

        return false;
    }
};