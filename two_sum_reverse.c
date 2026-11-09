#include <stdio.h>
#include <stdlib.h>
/**
 * Definition for singly-linked list.
 * 
 **/
 struct ListNode {
     int val;
     struct ListNode *next;
 };
 
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode dummy;
    dummy.next = NULL;
    struct ListNode *current = &dummy;
    int carry =0;
    while(l1 != 0 || l2 !=0 || carry != 0){
        int sum = carry;
        if(l1 != 0){
            sum += l1 ->val;
            l1 =l1->next;
        }
            if(l2 != 0){
                sum += l2-> val;
                l2 = l2->next;
            }
            carry = sum/10;
            int digit = sum % 10;

            struct ListNode* newNode = malloc(sizeof(struct ListNode));

            newNode->val =digit;
            newNode->next = NULL;

            current->next = newNode;
            current = current->next;

           
           }
           return dummy.next;
}