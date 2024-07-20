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
  ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
    ListNode *addi = addition(l1, l2);

    minus10(addi);

    return addi;
  }

  ListNode *addition(ListNode *l1, ListNode *l2) {
    ListNode *result = nullptr;
    ListNode *tmpl1 = l1;
    ListNode *tmpl2 = l2;

    while (tmpl1 || tmpl2) {
      int sum = 0;

      if (tmpl1) {
        sum += tmpl1->val;
        tmpl1 = tmpl1->next;
      }

      if (tmpl2) {
        sum += tmpl2->val;
        tmpl2 = tmpl2->next;
      }

      ListNode *newnode = new ListNode(sum);

      result = pushback(result, newnode);
    }

    return result;
  }

  ListNode *pushback(ListNode *head, ListNode *node) {
    if (!head) {
      return node;
    }

    ListNode *tmp = head;

    while (tmp->next) {
      tmp = tmp->next;
    }

    tmp->next = node;

    return head;
  }

  void minus10(ListNode *head) {
    ListNode *tmp = head;

    while (tmp) {
      if (tmp->val > 9) {
        tmp->val -= 10;
        add1next(tmp);
      }

      tmp = tmp->next;
    }
  }

  void add1next(ListNode *node) {
    if (node->next)
      node->next->val++;
    else {
      node->next = new ListNode(1);
    }
  }
};
