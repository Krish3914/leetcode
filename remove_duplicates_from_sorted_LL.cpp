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
  ListNode *deleteDuplicates(ListNode *head) {
    if (head == NULL || head->next == NULL) {
      return head;
    }
    unordered_map<int, int> mp;
    ListNode *temp = head;
    while (temp != NULL) {
      mp[temp->val]++;
      temp = temp->next;
    }
    temp = head;
    ListNode *tem = NULL;
    ListNode *tempp = head->next;
    while (tempp != NULL) {
      if (mp[temp->val] > 1) {
        cout << temp->val << " ";
        if (tem == NULL) {
          head = tempp;
        } else {
          tem->next = tempp;
        }
        temp = tempp;
        tempp = tempp->next;
      } else {
        tem = temp;
        temp = tempp;
        tempp = tempp->next;
      }
    }
    if (mp[temp->val] > 1) {
      if (tem == NULL) {
        head = tempp;
      } else {
        tem->next = tempp;
      }
      // tem->next = NULL;
    }
    return head;
  }
};