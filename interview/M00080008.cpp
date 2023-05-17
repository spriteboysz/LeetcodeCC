/**
 * Author: Deean
 * Date: 2023-05-17 22:45
 * FileName: interview
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector <string> paths;
    string path;
    vector<bool> used;

    void backtrace(string s) {
        if (path.size() == s.size()) {
            paths.push_back(path);
            return;
        }
        for (int i = 0, n = s.size(); i < n; ++i) {
            if (i > 0 && s[i] == s[i - 1] && !used[i - 1]) {
                continue;
            }
            if (!used[i]) {
                used[i] = true;
                path.push_back(s[i]);
                backtrace(s);
                used[i] = false;
                path.pop_back();
            }
        }
    }

    vector <string> permutation(string S) {
        paths.clear();
        path.clear();
        used.resize(S.size(), false);
        sort(S.begin(), S.end());
        backtrace(S);
        return paths;
    }
};

int main() {
    auto ans = Solution().permutation("qqe");
    cout << toString(ans) << endl;
    return 0;
}
