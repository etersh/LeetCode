class Solution {
public:

	int lengthOfLastWord(string s) {
		int ret = 0, i = s.length() - 1;

		while (i >= 0 && s[i] == ' ') i--;

		for (i; i >= 0 && s[i] != ' '; i--) ret++;

		return ret;
	}
};