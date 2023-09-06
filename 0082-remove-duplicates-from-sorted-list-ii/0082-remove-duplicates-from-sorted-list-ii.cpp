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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head || !head->next){
            return head;
        }
        ListNode* ptr = head;
        ListNode* prev = NULL;
        ListNode* forward = ptr->next;
        while(forward){
            if(ptr->val == forward->val){
                while(forward && ptr->val == forward->val){
                    forward = forward->next;
                }
                if(!prev){
                    head = forward;
                }
                else{
                    prev->next = forward;
                }
            }
            else{
                prev = ptr;
            }
            ptr = forward;
            if(forward){
                forward = ptr->next;
            }
        }
       
        return head;
    }
};