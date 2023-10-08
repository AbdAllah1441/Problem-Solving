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
#include <iostream>
#include <vector>

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) 
    {
        if (list1 == NULL || list2 == NULL)
        {
            if (list1 == NULL && list2 == NULL)
            {
                return NULL;
            }
            if (list1 == NULL)
            {
                return list2;
            }
            if (list2 == NULL)
            {
                return list1;
            }
        }

        ListNode* head;
        ListNode* tail;

        if (list2 -> val <= list1 -> val)
        {
            head = list2;
            list2 = list2 -> next;
        }
        else
        {
            head = list1;
            list1 = list1 -> next;
        }

        tail = head;
        
        while (list1 != NULL && list2 != NULL)
        {
            if (list2 -> val <= list1 -> val)
            {
                tail -> next = list2;
                list2 = list2 -> next;
            }
            else
            {
                tail -> next = list1;
                list1 = list1 -> next;
            }
            tail = tail -> next;
        }

        if (list1 != NULL) 
        {
            tail->next = list1;
        } 
        else 
        {
            tail->next = list2;
        }

        return head;
    }
};
