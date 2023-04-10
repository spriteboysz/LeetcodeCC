/**
 * Author: Deean
 * Date: 2023-04-09 22:21
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector <vector<int>> mergeArrays(vector <vector<int>> &nums1, vector <vector<int>> &nums2) {
        unordered_map<int, int> hash;
        for (auto num: nums1) {
            hash[num[0]] = num[1];
        }

        for (auto num: nums2) {
            hash[num[0]] += num[1];
        }
        vector <vector<int>> merge;
        for (auto [k, v]: hash) {
            merge.push_back(vector < int > {k, v});
        }
        sort(merge.begin(), merge.end());
        return merge;
    }
};

int main() {
    vector <vector<int>> nums1 = stringToVector2("[[1,2],[2,3],[4,5]]");
    vector <vector<int>> nums2 = stringToVector2("[[1,4],[3,2],[4,1]]");
    auto ans = Solution().mergeArrays(nums1, nums2);
    cout << toString(ans) << endl;
    return 0;
}
