/**
 * Author: Deean
 * Date: 2023-07-19 22:19
 * FileName: algorithm
 * Description:1860. 增长的内存泄露
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> memLeak(int memory1, int memory2) {
        int sec = 1;
        while (memory1 >= sec || memory2 >= sec) {
            if (memory1 >= memory2) {
                memory1 -= sec;
            } else {
                memory2 -= sec;
            }
            sec++;
        }
        return {sec, memory1, memory2};
    }
};

int main() {
    auto ans = Solution().memLeak(2, 2);
    cout << toString(ans) << endl;
    return 0;
}
