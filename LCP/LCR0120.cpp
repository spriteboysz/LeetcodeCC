/**
 * Author: Deean
 * Date: 2023-10-13 22:32
 * FileName: LCP
 * Description: LCR 120. 寻找文件副本
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int findRepeatDocument(vector<int> &documents) {
        unordered_set<int> visited;
        for (const auto &document: documents) {
            if (visited.count(document) > 0) {
                return document;
            }
            visited.insert(document);
        }
        return -1;
    }
};

int main() {
    vector<int> documents = {2, 5, 3, 0, 5, 0};
    auto ans = Solution().findRepeatDocument(documents);
    cout << toString(ans) << endl;
    return 0;
}