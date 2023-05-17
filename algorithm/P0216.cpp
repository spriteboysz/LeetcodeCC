/**
 * Author: Deean
 * Date: 2023-05-17 22:22
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<vector<int>> paths;
    vector<int> path;

    void backtrace(int k, int n, int pos) {
        if (path.size() == k && n == 0) {
            paths.push_back(path);
            return;
        } else if (path.size() == k) {
            return;
        }
        for (int i = pos; i <= n && i <= 9; ++i) {
            path.push_back(i);
            backtrace(k, n - i, i + 1);
            path.pop_back();
        }
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        paths.clear();
        path.clear();
        backtrace(k, n, 1);
        return paths;
    }
};

int main() {
    vector<vector<int>> ans = Solution().combinationSum3(3, 9);
    cout << toString(ans) << endl;
    return 0;
}
