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
        ListNode *slow = head, *fast = head;
        
        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        
        if(fast != NULL){
            //the length of list is odd
            //in this situation we should ignore the middle node
            slow = slow->next;
        }
        
          
        slow = reverse(slow);
        fast = head;
        
        while(slow != NULL){
            if(slow->val != fast->val) return false;
            slow = slow->next;
            fast = fast->next;
        }
        
        return true;
    }
    
    ListNode* reverse(ListNode* head){
        //reverse the later part of original list
        ListNode* prev = NULL;
        ListNode* tmp;
        while(head != NULL){
            tmp = head->next;
            head->next = prev;
            prev = head;
            head = tmp;
        }
        
        return prev;
    }
};