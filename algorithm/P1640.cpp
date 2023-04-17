/**
 * Author: Deean
 * Date: 2023-04-17 23:35
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    bool canFormArray(vector<int> &arr, vector <vector<int>> &pieces) {
        unordered_map<int, int> map;
        for (int i = 0, n = pieces.size(); i < n; ++i) {
            map[pieces[i][0]] = i;
        }
        for (int i = 0; i < arr.size();) {
            if (map.find(arr[i]) == map.end()) return false;
            auto &piece = pieces[map[arr[i]]];
            for (int j = 0; j < piece.size(); ++j, ++i) {
                if (arr[i] != piece[j]) return false;
            }
        }
        return true;
    }
};

int main() {
    vector<int> arr = {91, 4, 64, 78};
    vector <vector<int>> pieces = stringToVector2("[[78],[4,64],[91]]");
    auto ans = Solution().canFormArray(arr, pieces);
    cout << toString(ans) << endl;
    return 0;
}
