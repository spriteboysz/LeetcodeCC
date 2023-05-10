/**
 * Author: Deean
 * Date: 2023-05-10 22:05
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int> &deck) {
        deque<int> queue;
        sort(deck.rbegin(), deck.rend());
        for (int i = 0, n = deck.size(); i < n; ++i) {
            if (!queue.empty()) {
                queue.push_back(queue.front());
                queue.pop_front();
            }
            queue.push_back(deck[i]);
        }
        return vector<int>(queue.rbegin(), queue.rend());
    }
};

int main() {
    vector<int> deck = {17, 13, 11, 2, 3, 5, 7};
    auto ans = Solution().deckRevealedIncreasing(deck);
    cout << toString(ans) << endl;
    return 0;
}
