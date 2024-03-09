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
    // cout<<pos;
    if (head == NULL) {
      return false;
    }
    int i, j;
    int count = 0;
    ListNode *temp1 = head;
    ListNode *temp2 = head;
    if (temp1->next == NULL || temp1 == NULL) {
      return false;
    }
    while (temp1->next->next != NULL) {
      temp1 = temp1->next->next;
      temp2 = temp2->next;
      if (temp1 == temp2) {
        return true;
      }
      if (temp1->next == NULL) {
        return false;
      }
    }
    return false;
  }
};