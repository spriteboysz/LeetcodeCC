/**
 * Author: Deean
 * Date: 2022-08-30 23:40
 * FileName: algorithm/P2011.cpp
 * Description: 
 */

# include <iostream>
# include <vector>
# include <string>

using namespace std;

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int count = 0;
        for (string operation : operations) {
            if (operation[1] == '+') count++;
            if (operation[1] == '-') count--;
        }
        return count;
    }
};

int main() {
    vector<string> operations = {"X++","++X","--X","X--"};
    auto ans = Solution().finalValueAfterOperations(operations);
    cout << ans << endl;
    return 0;
}