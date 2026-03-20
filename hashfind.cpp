public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n=nums.size();
        vector<int> sorted=nums;
        sort(sorted.begin(),sorted.end());
        unordered_map<int,int> hash;
        for(int i=0;i<n;i++){
            if(hash.find(sorted[i])==hash.end())
                hash[sorted[i]]=i;
        }
        vector<int> ans(n,0);
        for(int i=0;i<n;i++){
            ans[i] = hash[nums[i]];
        }
        return ans;
    }
}
