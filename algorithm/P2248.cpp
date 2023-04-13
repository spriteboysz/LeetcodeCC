/**
 * Author: Deean
 * Date: 2023-04-13 22:56
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> intersection(vector <vector<int>> &nums) {
        int hash[6] = {0};
        for (auto num: nums) {
            for (auto item: num) {
                hash[item]++;
            }
        }
        vector<int> section;
        int n = nums.size();
        for (int i = 0; i < 6; ++i) {
            if (hash[i] == n) {
                section.push_back(i);
            }
        }
        return section;
    }
};

int main() {
    vector <vector<int>> nums = stringToVector2("[[3,1,2,4,5],[1,2,3,4],[3,4,5,6]]");
    auto ans = Solution().intersection(nums);
    cout << toString(ans) << endl;
    return 0;
}
