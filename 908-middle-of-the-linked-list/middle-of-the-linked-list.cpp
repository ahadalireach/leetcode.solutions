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
    ListNode* middleNode(ListNode* head) {
        ListNode* p = head;
        ListNode *q = head;
        while(p && p->next){
            p = p->next->next;
            q = q->next;
        }
        return q; // Time Complexity: O(n)
    }
};

// First element in case of even number
// ListNode* middleNode(ListNode* head) {

//     ListNode* p = head;
//     ListNode* q = head;
//     ListNode* prev_q = nullptr;

//     while(p && p->next){
//         p = p->next->next;
//         prev_q = q; 
//         q = q->next;
//     }

//     // If p is null, q is pointing to the first middle node in even case
//     // If p is not null, q is pointing to the second middle node in odd case
//     return (p == nullptr) ? prev_q : q;
// }