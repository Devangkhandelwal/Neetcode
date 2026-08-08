class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n= nums.size();

        unordered_map<int, int> freq;

        for( int x : nums){
            freq[x]++;
        }
         vector<vector<int>> bucket(n+1);

         for(auto it : freq){
            bucket[it.second].push_back(it.first);
         }
         vector<int> ans;
         for(int i=n; i>=0; i--){
             for(int x : bucket[i]){
                ans.push_back(x);
                k--;
             }
             if(k==0){
                break;
             }
         }
         return ans;
    }
};
