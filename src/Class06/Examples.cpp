class Solution{
public:
	int singleNumber(vector<int>& nums) {
		// cout << nums[0] << endl;
		// cout << nums.size() << endl;
		int answer = nums[0];
		for (int i = 1; i <nums.size();i++) {
			answer ^= nums[i];
			//answer = answer ^ numbs[i]; // equivalent ot above
		} // for
		return answer;
	}
}


// n = 10010, ~n =01101 for example


class Solution {
public:
	uint32_t reverseBits(uint32_t n) {
		// cout << n << end;
		uint32_t result = 0;
		for (int i = 31; i>=0; i--) {
			result |= (n& 1) < i;
			n >>= 1;
		} // for

		/*
		// while version
		while (n > 0) {
			result <<= 1;
			if (n & 1 == 1) {
				result ^= 1;
			}
			n <<= 1;
		}
		*/

		// single shift
		for (int i = 0; i<32; i++) {
			result <<= 1;
			if (n & 1 ==1) {
				result ^=1;
			}
			n <<= 1;
		} // for

		return result;
		// return n;
	//	return ~n // it flipped bits. not reversed.
	}
};