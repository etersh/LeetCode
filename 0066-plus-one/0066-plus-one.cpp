class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int flag = 0, amount = 1;

        for (int i = digits.size() - 1; i >= 0; i--) {
            if (digits[i] == 9 && flag == 0) {
                digits[i] = 0;
            }
            else {
                digits[i] += amount;
                flag = 1;
                amount = 0;
            }
        }

        if (digits[0] == 0) digits.insert(digits.begin(), 1);
        return digits;
    }
};