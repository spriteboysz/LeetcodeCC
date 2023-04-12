/**
 * Author: Deean
 * Date: 2023-04-12 23:07
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector <string> sortPeople(vector <string> &names, vector<int> &heights) {
        unordered_map<int, string> map;
        for (int i = 0; i < names.size(); ++i) {
            map[heights[i]] = names[i];
        }
        sort(heights.begin(), heights.end());
        vector <string> sorted;
        for (int i = heights.size() - 1; i >= 0; --i) {
            sorted.push_back(map[heights[i]]);
        }
        return sorted;
    }
};

int main() {
    vector <string> names = {"Alice", "Bob", "Bob"};
    vector<int> heights = {155, 185, 150};
    auto ans = Solution().sortPeople(names, heights);
    cout << toString(ans) << endl;
    return 0;
}
