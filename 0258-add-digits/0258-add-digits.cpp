class Solution {
public:
    int addDigits(int num) {
        // Digital Root :
        //  Remainder when dividing a number by 9 is same as summing its digits
        //  until a single digit remains
        if (num == 0)
            return 0;
        return (num % 9 == 0) ? 9 : num % 9;
    }
};