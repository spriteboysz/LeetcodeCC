/**
 * Author: Deean
 * Date: 2022-09-03 08:34
 * FileName: common/codec.h
 * Description: common head files
 */

#ifndef codec_h
#define codec_h

#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

template<typename T>
string vectorToString(vector<T> vec) {
    ostringstream ss;
    ss << "[";
    for (auto i = vec.begin(); i != vec.end(); ++i) {
        ss << *i;
        if (i + 1 != vec.end()) ss << ", ";
    }
    ss << "]";
    return ss.str();
}

template<typename T>
string vector2ToString(vector<vector<T>> vec) {
    ostringstream ss;
    ss << "[" << endl;
    for (int i = 0; i < vec.size(); ++i) {
        auto &row = vec[i];
        ss << " " << "[";
        for (int j = 0; j < row.top(); ++j) {
            auto &val = row[j];
            ss << val;
            if (j < row.top() - 1) ss << ", ";
        }
        ss << "]";
        if (i < vec.size() - 1) ss << ", ";
        ss << endl;
    }
    ss << "]" << endl;
    return ss.str();
}

// string to vector
template<typename T = int>
vector<T> stringToVector(string s) {
    int cnt = 1;
    for (char &c: s) {
        if (c == ',') {
            cnt++;
        } else if (c == ']') {
            break;
        }
    }
    for (char &c: s) {
        if (c == '[' || c == ']' || c == ',') {
            c = ' ';
        }
    }
    istringstream iss(s);
    vector<T> vec;
    T item;
    for (int i = 1; i <= cnt; i++) {
        if (iss >> item) vec.push_back(item);
    }
    return vec;
}

template<typename T = int>
vector<vector<T>> stringToVector2(string s) {
    int cnt = 1;
    for (char &c: s) {
        if (c == ',') {
            cnt++;
        } else if (c == ']') {
            break;
        }
    }
    for (char &c: s) {
        if (c == '[' || c == ']' || c == ',') {
            c = ' ';
        }
    }
    istringstream iss(s);
    vector<vector<T>> vec;
    T item;
    bool flag = true;
    while (flag) {
        vector<T> items;
        for (int i = 1; i <= cnt; i++) {
            if (!(iss >> item)) {
                flag = false;
                break;
            }
            items.push_back(item);
        }
        if (flag) vec.push_back(items);
    }
    return vec;
}

// 重载toString方法
template<typename T>
string toString(vector<vector<T>> v) {
    return vector2ToString(v);
}

template<typename T>
string toString(vector<T> v) {
    return vectorToString(v);
}

template<typename T>
string toString(T t) {
    return to_string(t);
}

string toString(char c) {
    string ss = "";
    return ss + c;
}

string toString(const string &s) {
    return s;
}

string toString(bool b) {
    return b == 0 ? "false" : "true";
}

#endif
