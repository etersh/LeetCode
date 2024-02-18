class Solution {
public:
	bool isPalindrome(int x) {
		if (x < 0) return false;
		int temp = x;
		long int rev = 0;

		while (temp) {
			int ones = temp % 10;
			rev = rev * 10 + ones;
			temp /= 10;
		}

		return rev == x;
	}
};