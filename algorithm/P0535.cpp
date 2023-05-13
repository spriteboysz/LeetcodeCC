/**
 * Author: Deean
 * Date: 2023-05-13 22:14
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    unordered_map<int, string> map;
    int pos = 0;

    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        map[++pos] = longUrl;
        return "http://tinyurl.com/" + to_string(pos);
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        int p = shortUrl.rfind('/') + 1;
        int key = stoi(shortUrl.substr(p, int(shortUrl.size()) - p));
        return map[key];
    }
};

int main() {
    Solution solution;
    cout << solution.decode(solution.encode("https://leetcode.com/problems/design-tinyurl")) << endl;
    return 0;
}
