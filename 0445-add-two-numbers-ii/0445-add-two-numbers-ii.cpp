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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int> st1;
        stack<int> st2;
        stack<int> st3;
        ListNode* ptr1 = l1;
        ListNode* ptr2 = l2;
        while(ptr1 != NULL){
            st1.push(ptr1->val);
            ptr1 = ptr1->next;
        }
        while(ptr2 != NULL){
            st2.push(ptr2->val);
            ptr2 = ptr2->next;
        }
        int carry = 0;
        while(!st1.empty() && !st2.empty()){
            int r = st1.top() + st2.top() + carry;
            st3.push(r%10);
            carry = r / 10;
            st1.pop();
            st2.pop();
        }
        while(!st1.empty()){
            int r = st1.top() + carry;
            st3.push(r%10);
            carry = r/10;
            st1.pop();
        }
        while(!st2.empty()){
            int r = st2.top() + carry;
            st3.push(r%10);
            carry = r/10;
            st2.pop();
        }
        if(carry != 0){
            st3.push(carry);
        }
        ListNode* ans = new ListNode();
        ListNode* current = ans;

        while (!st3.empty()) {
            current->val = st3.top();
            st3.pop();
            if (!st3.empty()) {
                current->next = new ListNode();
                current = current->next;
            }
        }
        return ans;
    }
};