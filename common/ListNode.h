/**
 * Author: Deean
 * Date: 2022-09-03 22:26
 * FileName: common/ListNode.h
 * Description: ListNode
 */

#ifndef list_node_h
#define list_node_h

#include <string>
#include <codec.h>

using namespace std;

//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;

    ListNode(int x) : val(x), next(NULL) {}
};

ListNode *stringToList(string str) {
    // Generate list from the input
    vector<int> list = stringToVector(str);

    // Now convert that list into linked list
    ListNode *dummyRoot = new ListNode(0);
    ListNode *ptr = dummyRoot;
    for (int item: list) {
        ptr->next = new ListNode(item);
        ptr = ptr->next;
    }
    ptr = dummyRoot->next;
    delete dummyRoot;
    return ptr;
}

string listToString(ListNode *node) {
    if (node == nullptr) return "[]";

    string result;
    while (node) {
        result += to_string(node->val) + ", ";
        node = node->next;
    }
    return "[" + result.substr(0, result.length() - 2) + "]";
}

string toString(ListNode *node) {
    return listToString(node);
}

#endif
