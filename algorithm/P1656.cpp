/**
 * Author: Deean
 * Date: 2022-09-02 22:12
 * FileName: algorithm/P1656.cpp
 * Description: 1656. 设计有序流
 */

#include <iostream>
#include <vector>

using namespace std;

class OrderedStream {
private:
    vector<string> stream;
    int ptr;
public:
    OrderedStream(int n) {
        stream.resize(n + 1);
        ptr = 1;
    }

    vector<string> insert(int idKey, string value) {
        stream[idKey] = value;
        vector<string> ret;
        while (ptr < stream.size() && !stream[ptr].empty()) {
            ret.push_back(stream[ptr++]);
        }
        return ret;
    }
};

int main() {
    OrderedStream os = OrderedStream(5);
    vector<string> vec1 = os.insert(3, "ccccc"); // 插入 (3, "ccccc")，返回 []
    for (string s: vec1) cout << s << " ";
    cout << endl;
    vector<string> vec2 = os.insert(1, "aaaaa"); // 插入 (1, "aaaaa")，返回 ["aaaaa"]
    for (string s: vec2) cout << s << " ";
    cout << endl;
    vector<string> vec3 = os.insert(2, "bbbbb"); // 插入 (2, "bbbbb")，返回 ["bbbbb", "ccccc"]
    for (string s: vec3) cout << s << " ";
    cout << endl;
    vector<string> vec4 = os.insert(5, "eeeee"); // 插入 (5, "eeeee")，返回 []
    for (string s: vec4) cout << s << " ";
    cout << endl;
    vector<string> vec5 = os.insert(4, "ddddd"); // 插入 (4, "ddddd")，返回 ["ddddd", "eeeee"]
    for (string s: vec5) cout << s << " ";
    cout << endl;
    return 0;
}