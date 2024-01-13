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
  ListNode *deleteMiddle(ListNode *head) {
    if (head == NULL) {
      return head;
    }
    if (head->next == NULL) {
      // ListNode* temp = head;
      head = NULL;
      return head;
    }
    if (head->next->next == NULL) {
      // ListNode* temp;
      head->next = NULL;
      return head;
    }
    ListNode *temp1 = head;
    ListNode *temp2 = head;
    while (temp2->next != NULL) {
      if (temp2->next->next == NULL) {
        temp2 = temp2->next;
        temp1 = temp1->next;
        continue;
      }
      temp2 = temp2->next->next;
      temp1 = temp1->next;
    }
    temp1->val = temp1->next->val;
    temp1->next = temp1->next->next;
    // cout<<temp1<<"\t"<<temp2;
    return head;
  }
};