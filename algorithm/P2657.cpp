/**
 * Author: Deean
 * Date: 2023-05-13 22:40
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int> &A, vector<int> &B) {
        vector<int> commons;
        for (int i = 0, n = A.size(); i < n; ++i) {
            vector<int> common(51, 0);
            for (int j = 0; j <= i; ++j) {
                common[A[j]] |= 1;
                common[B[j]] |= 2;
            }
            int cnt = 0;
            for (int j = 0; j < 51; ++j) {
                if (common[j] == 3) {
                    cnt++;
                }
            }
            commons.push_back(cnt);
        }
        return commons;
    }
};

int main() {
    vector<int> A = {1, 3, 2, 4}, B = {3, 1, 2, 4};
    auto ans = Solution().findThePrefixCommonArray(A, B);
    cout << toString(ans) << endl;
    return 0;
}
