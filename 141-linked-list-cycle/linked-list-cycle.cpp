/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        // ListNode* fast = head;
        // ListNode* slow = head;
        // while(fast && fast->next){
        //     slow = slow->next;
        //     fast = fast->next->next;
        //     if(fast == slow)
        //         return true;
        // }
        // return false;
        std::unordered_set<ListNode*> visited;

        ListNode* current = head;
        while(current){
            if(visited.count(current))
                return true;
            visited.insert(current);
            current = current->next;
        }
        return false;
    }
};


// Move to new node and store to some data structure if elements come again then we should stop. But this will take O(n)
// We can solve this in O(1) using two pointer approaach move one pointer by one and other by two