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

class Solution { // using c++
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *start=head;
        while(start!=NULL && start->next!=NULL){
            if(start->val==start->next->val){
                start->next=start->next->next;
            }else{
                start=start->next;
            }
        }
        return head;
    }
};