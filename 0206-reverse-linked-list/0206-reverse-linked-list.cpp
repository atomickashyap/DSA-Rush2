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
        stack<ListNode*> RList;
        ListNode* Hdummy = head;
        if(head == NULL || head ->next == NULL)
        {
            return head;
        }
        while (Hdummy != NULL)
        {
            RList.push(Hdummy);
            cout<<Hdummy->val<<" ";
            Hdummy = Hdummy->next;
        }
        Hdummy = head;
        ListNode* newHead = RList.top();
        RList.pop();
        Hdummy = newHead;
        while(!RList.empty()) 
        {
            Hdummy->next = RList.top();
            RList.pop();
            Hdummy = Hdummy->next;
        }
         Hdummy->next = NULL;

        return newHead;
    }
};


// Brute Force
// stack

// 1,2,3,4,5

// 5
// 4
// 3
// 2
// 1



