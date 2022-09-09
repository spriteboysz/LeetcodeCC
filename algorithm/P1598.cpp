/**
 * Author: Deean
 * Date: 2022-09-09 22:11
 * FileName: algorithm/P1598.cpp
 * Description: 1598. 文件夹操作日志搜集器
 */

#include <leetcode.h>

using namespace std;

class Solution {
public:
    int minOperations(vector<string> &logs) {
        int depth = 0;
        for (auto &log: logs) {
            if (log == "./") {
                continue;
            } else if (log == "../") {
                if (depth > 0) {
                    depth--;
                }
            } else {
                depth++;
            }
        }
        return depth;
    }
};

int main() {
    vector<string> logs = {"d1/", "d2/", "./", "d3/", "../", "d31/"};
    auto ans = Solution().minOperations(logs);
    cout << toString(ans) << endl;
    logs = {"./", "../", "./"};
    ans = Solution().minOperations(logs);
    cout << toString(ans) << endl;
    return 0;
}