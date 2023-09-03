/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* end = head;
        ListNode* ptr1 = head;
        ListNode* start = NULL;
        while(k != 1){
           ptr1 = ptr1->next;
            k--;
        }
        start = ptr1;
        while(ptr1->next != NULL){
            ptr1 = ptr1->next;
            end = end->next;
        }
        swap(start->val,end->val);
        return head;
    }
};