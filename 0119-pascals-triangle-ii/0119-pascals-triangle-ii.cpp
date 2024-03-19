class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>>ret{ {1} };
        int cnt = 1;

        for (int i = 1; i <= rowIndex; i++) {
            ret.push_back({ 1 });
            for (int j = cnt - 1; j >= 1; j--) ret[cnt].push_back(ret[cnt - 1][j - 1] + ret[cnt - 1][j]);
            ret[cnt].push_back(1);
            cnt++;
        }

        return ret[rowIndex];
    }
};