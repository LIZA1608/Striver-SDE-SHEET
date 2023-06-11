class Solution {
public:
vector<int>generate(int n){
    long long carry=1;
    vector<int>ans;
    ans.push_back(i);
    for(int i=1;i<=n;i++){
        carry=carry*(n-i);
        carry=carry/i;
        ans.push_back(carry);
    }
    return ans;
}
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        for(int i=1;i<=numRows;i++){
            vector<int>temp=generate(i);
            ans.push_back(generate(i));
            }
            return ans;
    }
};
