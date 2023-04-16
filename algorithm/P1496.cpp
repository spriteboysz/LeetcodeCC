/**
 * Author: Deean
 * Date: 2023-04-16 21:54
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    bool isPathCrossing(string path) {
        int x = 0, y = 0;
        unordered_set<int> visited;
        visited.insert(x * 20001 + y);
        for (char c: path) {
            switch (c) {
                case 'N':
                    y++;
                    break;
                case 'S':
                    y--;
                    break;
                case 'W':
                    x--;
                    break;
                case 'E':
                    x++;
                    break;
            }
            if (visited.count(x * 20001 + y)) {
                return true;
            }
            visited.insert(x * 20001 + y);
        }
        return false;
    }
};

int main() {
    auto ans = Solution().isPathCrossing("NESWW");
    cout << toString(ans) << endl;
    return 0;
}
