class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n= strs.size();
        sort(strs.begin(), strs.end());
        if(strs.empty()) return "";
        string s1= strs[0];
        string s2= strs[n-1];
        string ans ="";
        int minlen= min(s1.length(),s2.length());
        for(int i=0; i<minlen; i++){
            if(s1[i]!= s2[i]){
                break;
            }
            else ans+=s1[i];
        }
        return ans;

    }
};