/**
 * Author: Deean
 * Date: 2023-04-22 14:58
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int numUniqueEmails(vector <string> &emails) {
        unordered_set <string> set;
        for (string email: emails) {
            string local;
            for (char c: email) {
                if (c == '+' || c == '@') {
                    break;
                }
                if (c != '.') {
                    local += c;
                }
            }
            set.emplace(local + email.substr(email.find('@')));
        }
        return set.size();
    }
};

int main() {
    vector <string> emails = {"test.email+alex@leetcode.com", "test.e.mail+bob.cathy@leetcode.com",
                              "testemail+david@lee.tcode.com"};
    auto ans = Solution().numUniqueEmails(emails);
    cout << toString(ans) << endl;
    return 0;
}
