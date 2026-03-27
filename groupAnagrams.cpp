class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        for(string str:strs){
              string s=str;
              sort(s.begin(),s.end());
              mp[s].push_back(str);
        }
        vector<vector<string>>ans;
        for(auto&pair:mp){
            ans.push_back(pair.second);
        }
        return ans;
    }
};
