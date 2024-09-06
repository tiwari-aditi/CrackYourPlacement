class Solution {
public:
    string removeDuplicateLetters(string s) {
        int n = s.length();
        vector<bool> taken(26,false);
        vector<int> lastIndex(26);
        string result;

        for(int i=0;i<n;i++){
            int ch = s[i];
            lastIndex[ch - 'a'] = i;
        }

        for(int i=0;i<n;i++){
            char ch = s[i];
            int index = ch - 'a';

            if(taken[index]){
                continue;
            }
            while(result.length()>0 && result.back()>ch && lastIndex[result.back()-'a']>i){
                taken[result.back()-'a'] = false;
                result.pop_back();
            }
            result.push_back(ch);
            taken[index] = true;
        }

        return result;

    }
};
