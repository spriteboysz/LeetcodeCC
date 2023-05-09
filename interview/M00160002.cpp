/**
 * Author: Deean
 * Date: 2023-05-08 22:52
 * FileName: interview
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class WordsFrequency {
public:
    unordered_map<string, int> hash;

    WordsFrequency(vector <string> &book) {
        for (auto word: book) {
            hash[word]++;
        }
    }

    int get(string word) {
        return hash[word];
    }
};

int main() {
    vector <string> book = {"i", "have", "an", "apple", "he", "have", "a", "pen"};
    WordsFrequency *obj = new WordsFrequency(book);
    cout << obj->get("you") << endl;
    cout << obj->get("have") << endl;
    cout << obj->get("an") << endl;
    return 0;
}
