#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
	int maxCoins(vector<int>& piles) {
		sort(piles.begin(), piles.end());
		// for each 3 pile, get 2 largest and 1 smallest
		int pileBatch = piles.size() / 3;
		for (int i = 0; i < pileBatch; i++) {

		}
		return 0;
	}
};

int main() {
	Solution sol;
	vector<int> piles{2,4,1,2,7,8};
	cout << sol.maxCoins(piles) << endl;

	return 0;
}