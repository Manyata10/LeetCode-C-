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
    ListNode* removeElements(ListNode* head, int val) {

        ListNode* prev=new ListNode(0);
        prev->next=head;
        ListNode* curr = prev;
        while (curr->next != NULL) {
            if(curr->next->val == val){
                ListNode* temp = curr->next;
                curr->next = curr->next->next;
                temp->next=NULL;
                delete temp;
            }
            else{
                curr = curr->next;
            }
        }
        return prev->next;
    }
};

// struct ListNode* removeElements(struct ListNode* head, int val) {
//     struct ListNode *temp = (struct ListNode*)malloc(sizeof(struct ListNode));
//     temp->next = head;
//     struct ListNode *curr = temp;
//     while(curr->next != NULL ){
//         if(curr->next->val == val) curr->next = curr->next->next;
//         else curr = curr->next;
//     }
//     return temp->next;
// }