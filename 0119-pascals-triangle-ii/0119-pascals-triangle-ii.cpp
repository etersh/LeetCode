class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> ret{ {1} };

        for (int i = 1; i <= rowIndex; i++) {
            ret.push_back({ 1 });
            for (int j = i - 1; j >= 1; j--)
                ret[i].push_back(ret[i - 1][j - 1] + ret[i - 1][j]);
            ret[i].push_back(1);
        }

        return ret[rowIndex];
    }
};