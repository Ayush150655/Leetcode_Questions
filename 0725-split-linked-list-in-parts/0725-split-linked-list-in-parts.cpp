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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        ListNode* curr = head;
        int s = 0;
        while(curr){
            curr = curr->next;
            s++;
        }
        vector<ListNode*> ans(k,NULL);
        int l = s/k;
        int r = s%k;
        curr = head;
        ListNode* prev = NULL;
        for(int i=0;curr && i<k ;i++,r--){
            ans[i] = curr;
            for (int j = 0; j < l + (r > 0); j++) {
                prev = curr;
                curr = curr->next;
            }
            prev->next = NULL;
        }
        return ans;
    }
};