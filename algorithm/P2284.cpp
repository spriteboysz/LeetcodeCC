/**
 * Author: Deean
 * Date: 2023-07-17 23:12
 * FileName: algorithm
 * Description:2284. 最多单词数的发件人
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    string largestWordCount(vector <string> &messages, vector <string> &senders) {
        unordered_map<string, int> map;
        for (int i = 0, n = senders.size(); i < n; ++i) {
            int cnt = count(messages[i].begin(), messages[i].end(), ' ') + 1;
            if (map.count(senders[i]) == 1) {
                map[senders[i]] += cnt;
            } else {
                map[senders[i]] = cnt;
            }
        }

        string sender = senders[0];
        int maximum = map[senders[0]];
        for (auto [k, v]: map) {
            if (v > maximum || (v == maximum && k > sender)) {
                sender = k;
                maximum = v;
            }
        }
        return sender;
    }
};

int main() {
    vector <string> messages = {"Hello userTwooo", "Hi userThree", "Wonderful day Alice", "Nice day userThree"};
    vector <string> senders = {"Alice", "userTwo", "userThree", "Alice"};
    auto ans = Solution().largestWordCount(messages, senders);
    cout << toString(ans) << endl;
    return 0;
}
