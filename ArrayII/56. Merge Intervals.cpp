class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        int m=intervals[0].size();
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>out;
        for(auto it:intervals){
            if(out.empty() || out.back()[1]<it[0]){
                out.push_back(it);
            }
            else{
                out.back()[1]=max(out.back()[1],it[1]);
            }
        }
        return out;
    }
};
