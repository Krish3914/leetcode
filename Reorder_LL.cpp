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
  void reorderList(ListNode *head) {
    int i, j;
    vector<int> arr;
    ListNode *temp1 = head;
    while (temp1 != NULL) {
      arr.push_back(temp1->val);
      temp1 = temp1->next;
    }
    for (i = 0; i < arr.size(); i++) {
      cout << arr[i] << " ";
    }
    cout << endl;
    i = 0;
    j = arr.size() - 1;
    ListNode *temp = head;
    while (temp != NULL) {
      temp->val = arr[i];
      i++;
      if (temp->next == NULL) {
        // break;
        return;
      }
      temp = temp->next;
      temp->val = arr[j];
      j--;
      temp = temp->next;
    }
    return;
    // return head;
  }
};