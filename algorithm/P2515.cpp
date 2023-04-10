/**
 * Author: Deean
 * Date: 2023-04-10 23:43
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int closetTarget(vector <string> &words, string target, int startIndex) {
        int res = 101;
        for (int i = 0, n = words.size(); i < n; ++i) {
            if (words[i] == target) {
                res = min(res, (i - startIndex + n) % n);
                res = min(res, (startIndex - i + n) % n);
            }
        }
        return res == 101 ? -1 : res;
    }
};

int main() {
    vector <string> words = {"hello", "i", "am", "leetcode", "hello"};
    auto ans = Solution().closetTarget(words, "hello", 1);
    cout << toString(ans) << endl;
    return 0;
}
