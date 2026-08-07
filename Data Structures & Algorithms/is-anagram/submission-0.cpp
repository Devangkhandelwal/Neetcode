class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!= t.size()){
            return false;
        }
        // unordered_map<char,int>mp;
        // for(int i=0; i<s.size(); i++){
        //     mp[s[i]]++;
        // }
        // for(int j=0; j<t.size(); j++){
        //     if(mp.find(t[j]) == mp.end()){
        //         return false;
        //     }
        //     mp[t[j]]--;
        //     if(mp[t[j]] == 0){
        //         mp.erase(t[j]);
        //     }
        // }
        // return true;
        int freq[26]={0};
        for(int i=0; i<s.size() ;i++){
            freq[s[i] - 'a']++;
            freq[t[i] - 'a']--;

        }
        for(int j=0; j<26; j++){
            if(freq[j]!= 0){
                return false;

            }
        }
        return true;
    }
};
