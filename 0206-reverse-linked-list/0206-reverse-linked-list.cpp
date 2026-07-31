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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode *curr = head;
        ListNode *Next = curr->next;
        ListNode* prev = NULL; 
        
        while(Next!=NULL){
            if(curr==head){
                head->next=NULL;
                prev=head;
            }
            else prev = curr;
            curr=Next;
            Next=curr->next;
            curr->next=prev;
        }
        return curr;
    }
};