/**
 * Author: Deean
 * Date: 2023-04-10 23:19
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
        bool bulky= length >= 10000 || width >= 10000 || height >= 10000 || (long) length * width * height >= (int) (1e9);
        bool heavy = mass >= 100;

        if (bulky && heavy) return "Both";
        if (bulky) return "Bulky";
        if (heavy) return "Heavy";
        return "Neither";
    }
};

int main() {
    auto ans = Solution().categorizeBox(1000, 35, 700, 300);
    cout << toString(ans) << endl;
    return 0;
}
