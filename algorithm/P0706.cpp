/**
 * Author: Deean
 * Date: 2023-07-23 11:06
 * FileName: algorithm
 * Description:706. 设计哈希映射
 */

#include "..\common\leetcode.h"

using namespace std;

class MyHashMap {
private:
    unordered_map<int, int> hash;
public:
    MyHashMap() {

    }

    void put(int key, int value) {
        hash[key] = value;
    }

    int get(int key) {
        return hash.count(key) > 0 ? hash[key] : -1;
    }

    void remove(int key) {
        hash.erase(key);
    }
};

int main() {
    MyHashMap *obj = new MyHashMap();
    obj->put(1, 1);
    obj->put(2, 2);
    cout << obj->get(1) << endl;
    cout << obj->get(3) << endl;
    obj->put(2, 2);
    cout << obj->get(3) << endl;
    obj->remove(2);
    cout << obj->get(3) << endl;
    return 0;
}
