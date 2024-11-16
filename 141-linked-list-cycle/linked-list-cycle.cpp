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
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
            if(fast == slow)
                return true;
        }
        return false;
        // Time Complexity: O(n)
        // Space Complexity: O(1)
    }
};

// Detect cycles in O(1) space using two pointers.
// Move one pointer by one and the other by two to find if they meet, indicating a cycle.


// Move through the linked list, storing each node in a set to detect cycles.
// This method uses extra space and has a time complexity of O(n).

// std::unordered_set<ListNode*> visited;

// ListNode* current = head;
// while (current) {
//     if (visited.count(current))
//         return true;
//     visited.insert(current);
//     current = current->next;
// }
// return false;