/**
 * Author: Deean
 * Date: 2023-05-08 23:03
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector <vector<string>> displayTable(vector <vector<string>> &orders) {
        unordered_set <string> foodSet;
        unordered_map<int, unordered_map<string, int>> tables;
        for (auto order: orders) {
            foodSet.insert(order[2]);
            tables[stoi(order[1])][order[2]]++;
        }
        vector <string> foods;
        for (auto food: foodSet) {
            foods.push_back(food);
        }
        sort(foods.begin(), foods.end());
        vector<int> ids;
        for (auto [id, _]: tables) {
            ids.push_back(id);
        }
        sort(ids.begin(), ids.end());
        vector <vector<string>> table(ids.size() + 1, vector<string>(foods.size() + 1));
        table[0][0] = "Table";
        copy(foods.begin(), foods.end(), table[0].begin() + 1);
        for (int i = 0, m = ids.size(); i < m; ++i) {
            int id = ids[i];
            table[i + 1][0] = to_string(id);
            for (int j = 0, n = foods.size(); j < n; ++j) {
                table[i + 1][j + 1] = to_string(tables[id][foods[j]]);
            }
        }
        return table;
    }
};

int main() {
    vector <vector<string>> orders = {{"David",  "3",  "Ceviche"},
                                      {"Corina", "10", "Beef Burrito"},
                                      {"David",  "3",  "Fried Chicken"},
                                      {"Carla",  "5",  "Water"},
                                      {"Carla",  "5",  "Ceviche"},
                                      {"Rous",   "3",  "Ceviche"}};
    auto ans = Solution().displayTable(orders);
    cout << toString(ans) << endl;
    return 0;
}
