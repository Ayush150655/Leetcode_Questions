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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* ptr1 = head;
        ListNode* ptr2 = head;
        ListNode* ptr = NULL;
        if(head->next == NULL)
        {
            return NULL;
        }
        while(ptr2 != NULL && ptr2->next != NULL)
        {
            ptr2 = ptr2->next->next;
            /*if(ptr2 != NULL)
            {
                ptr2 = ptr2->next;
            }*/
            ptr = ptr1;
            ptr1 = ptr1->next;            
        }
        ptr->next = ptr1->next;
        return head;
    }
};