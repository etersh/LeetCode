class Solution {
public:
    int calPoints(vector<string>& operations) {
        int sum = 0;
        vector<int> hist;
        for (int i = 0; i < operations.size(); i++) {
            if (isdigit(operations[i][0]) || operations[i][0] == '-')
                hist.push_back(stoi(operations[i]));
            else if (operations[i] == "2")
                hist.push_back(2);
            else if (operations[i] == "C")
                hist.pop_back();
            else if (operations[i] == "D")
                hist.push_back(hist.back() * 2);
            else if (operations[i] == "+") {
                if (hist.size() >= 2) {
                    hist.push_back(hist[hist.size() - 1] +
                                   hist[hist.size() - 2]);
                }
            }
        }
        for (int i = 0; i < hist.size(); i++) {
            sum += hist[i];
        }
        return sum;
    }
};