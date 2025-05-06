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
    ListNode* swapPairs(ListNode* head) {

        ListNode* dummyNode = new ListNode(0);
        dummyNode->next = head;

        ListNode* previousNode = dummyNode;
        ListNode* currentNode = head;

        while (currentNode && currentNode->next) 
        {
            ListNode* nextNode  = currentNode->next;

            currentNode->next   = nextNode->next;
            nextNode->next      = currentNode;
            previousNode->next  = nextNode;

            previousNode        = currentNode;
            currentNode         = currentNode->next;
        }

        ListNode* swappedHead = dummyNode->next;
        delete dummyNode;

        return swappedHead;
    }
};
