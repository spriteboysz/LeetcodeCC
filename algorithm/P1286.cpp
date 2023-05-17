/**
 * Author: Deean
 * Date: 2023-05-17 23:44
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class CombinationIterator {
public:
    vector <string> paths;
    string path;
    int index;

    void backtrace(string s, int n, int pos) {
        if (path.size() == n) {
            paths.push_back(path);
            return;
        }
        for (int i = pos; i < s.size(); ++i) {
            path.push_back(s[i]);
            backtrace(s, n, i + 1);
            path.erase(path.end() - 1);
        }
    }

    CombinationIterator(string characters, int combinationLength) {
        paths.clear();
        path.clear();
        backtrace(characters, combinationLength, 0);
        // cout << toString(paths) << endl;
        index = 0;
    }

    string next() {
        return paths[index++];
    }

    bool hasNext() {
        return index < paths.size();
    }
};

int main() {
    auto obj = new CombinationIterator("abc", 2);
    cout << obj->next() << endl;
    cout << obj->hasNext() << endl;
    cout << obj->next() << endl;
    cout << obj->hasNext() << endl;
    cout << obj->next() << endl;
    cout << obj->hasNext() << endl;
    return 0;
}
