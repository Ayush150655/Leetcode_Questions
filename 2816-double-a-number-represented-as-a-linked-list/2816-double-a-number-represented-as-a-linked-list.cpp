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
    ListNode* doubleIt(ListNode* head) {
        ListNode* newNode = new ListNode();
        ListNode* ptr = head;
        int carry = 0;
        if(head->val >= 5){
            newNode->val = 1;
            newNode->next = head;
            head = newNode;
        }
        while(ptr != NULL){
            if(ptr->next != NULL){
                if(ptr->next->val >= 5){
                    carry = 1;
                }
            }
            ptr->val = (ptr->val*2 + carry)%10;
            carry = 0;
            ptr = ptr->next; 
        }
        return head;
    }
};