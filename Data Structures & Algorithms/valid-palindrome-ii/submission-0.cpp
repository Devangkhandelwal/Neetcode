class Solution {
public:
    bool isPalindrome(string t){
        int l=0;
        int r=t.size()-1;
        while(l<r){
            if(t[l] != t[r]){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int n = s.size();
        int left=0;
        int right=s.size()-1;
         while(left<right)
        {
            if(s[left]==s[right])
            {
                left++;
                right--;
            }
            else
            {
                return isPalindrome(s.substr(left+1,right-left))|| isPalindrome(s.substr(left,right-left));
            }
        }
        return true;
    }
};