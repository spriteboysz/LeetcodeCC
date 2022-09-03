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
    return nullptr;
}

string listToString(ListNode *head) {
    return "";
}

#endif
