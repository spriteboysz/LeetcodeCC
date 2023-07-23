/**
 * Author: Deean
 * Date: 2023-07-23 11:14
 * FileName: algorithm
 * Description:705. 设计哈希集合
 */

#include "..\common\leetcode.h"

using namespace std;

class MyHashSet {
private:
    int n = 1000001;
    vector<bool> visited;
public:
    MyHashSet() {
        for (int i = 0; i <= n; ++i) {
            visited.push_back(false);
        }
    }

    void add(int key) {
        visited[key] = true;
    }

    void remove(int key) {
        visited[key] = false;
    }

    bool contains(int key) {
        return visited[key];
    }
};

int main() {
    MyHashSet *obj = new MyHashSet();
    obj->add(1);
    obj->add(2);
    cout << obj->contains(1) << endl;
    cout << obj->contains(3) << endl;
    obj->add(2);
    cout << obj->contains(2) << endl;
    obj->remove(2);
    cout << obj->contains(2) << endl;
    return 0;
}
