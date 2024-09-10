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
    int GCD(int val1 , int val2)
    {
        if(val2 == 0){return val1;}
        if(val1 == 0){return val2;}

        return GCD(val2, val1%val2);
    }

    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head == nullptr || head->next == nullptr){return head;}

        ListNode* previous = head;
        ListNode* following = head->next;

        while(following != nullptr)
        {
            int divisor = GCD(previous->val, following->val);
            ListNode* GCD = new ListNode(divisor, following);
            previous->next = GCD;

            previous = following;
            following = following->next;
        }

        return head;
    }
};
