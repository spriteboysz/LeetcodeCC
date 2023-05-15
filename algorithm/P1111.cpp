/**
 * Author: Deean
 * Date: 2023-05-15 23:12
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        vector<int> depths;
        int depth = -1;
        for (char c: seq) {
            if (c == '(') {
                depth += 1;
                depths.push_back(depth % 2);
            } else {
                depths.push_back(depth % 2);
                depth -= 1;
            }
            //depths.push_back(depth);
        }
        return depths;
    }
};

int main() {
    auto ans = Solution().maxDepthAfterSplit("()(())()");
    cout << toString(ans) << endl;
    return 0;
}
