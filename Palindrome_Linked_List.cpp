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
    bool isPalindrome(ListNode* head) {
        
        while(head->next!=NULL){
            ListNode* right;
            ListNode* ptr;
        right=head;
        ptr=head;
        while(ptr->next->next!=NULL){
            ptr=ptr->next;
        }
        while(right->next!=NULL){
            right=right->next;
        }
        if(head->val!=right->val) return false;
        head=head->next;
        ptr->next=NULL;}
        return true;
    }
    
};
