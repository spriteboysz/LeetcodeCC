/**
 * Author: Deean
 * Date: 2023-05-12 22:45
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

// This is the custom function interface.
// You should not implement it, or speculate about its implementation
class CustomFunction {
public:
    // Returns f(x, y) for any given positive integers x and y.
    // Note that f(x, y) is increasing with respect to both x and y.
    // i.e. f(x, y) < f(x + 1, y), f(x, y) < f(x, y + 1)
    int f(int x, int y) {
        return x + y;
    }
};

class Solution {
public:
    vector <vector<int>> findSolution(CustomFunction &customfunction, int z) {
        vector <vector<int>> solution;
        for (int i = 1; i <= 1000; ++i) {
            for (int j = 1; j <= 1000; ++j) {
                if (customfunction.f(i, j) == z) {
                    solution.push_back({i, j});
                }
            }
        }
        return solution;
    }
};

int main() {
    auto function = CustomFunction();
    auto ans = Solution().findSolution(function, 5);
    cout << toString(ans) << endl;
    return 0;
}
