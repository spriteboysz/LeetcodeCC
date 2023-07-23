/**
 * Author: Deean
 * Date: 2023-07-22 23:45
 * FileName: algorithm
 * Description:811. 子域名访问计数
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector <string> subdomainVisits(vector <string> &cpdomains) {
        unordered_map<string, int> map;
        for (auto domains: cpdomains) {
            int space = domains.find(' ');
            int count = stoi(domains.substr(0, space));
            string domain = domains.substr(space + 1);
            map[domain] += count;
            for (int i = 0, n = domain.size(); i < n; ++i) {
                if (domain[i] == '.') {
                    string subdomain = domain.substr(i + 1);
                    map[subdomain] += count;
                }
            }
        }
        vector <string> visited;
        for (auto [subdomain, count]: map) {
            visited.push_back(to_string(count) + " " + subdomain);
        }
        return visited;
    }
};

int main() {
    vector <string> cpdomains = {"900 google.mail.com", "50 yahoo.com", "1 intel.mail.com", "5 wiki.org"};
    auto ans = Solution().subdomainVisits(cpdomains);
    cout << toString(ans) << endl;
    return 0;
}
