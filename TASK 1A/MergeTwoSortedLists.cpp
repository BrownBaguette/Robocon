#include <bits/stdc++.h>
using namespace std;

// I am just attaching the leetcode code I wrote. Its a bit cumbersome to include the struct defs.
// The definitions can be found on the leetcode qn itself.

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    ListNode* ans = new ListNode(0);
    ListNode* current = ans;

    while(list1!=NULL && list2!= NULL){
        if(list1->val <= list2->val){
            current->next = list1;
            list1 = list1->next;
        }
        else{
            current->next = list2;
            list2 = list2->next;
        }
        current = current->next;
    }
    current->next = list1!=NULL ? list1 : list2;
    return ans->next;
}