#include<bits/stdc++.h>
using namespace std;
bool isPallindrome(ListNode* head){
    if(head==NULL || head->next==NULL) return true;
    ListNode *slow=head, *fast=head;
    while(fast->next!=NULL && fast->next->next!=NULL)
    {
        slow=slow->next; fast=fast->next->next;
    }
    slow->next=ReverseList(slow->next);
    slow=slow->next;
    while(slow)
    {
        if(slow->val!=head->val)return false;
        head=head->next; slow=slow->next
    }
    return true;
}
ListNode* ReverseList(ListNode *head){
    ListNode *pre=NULL; ListNode* nxt=NULL;
    while(head!=NULL){
        nxt=head->next;
        head->next=pre;
        pre=head;
        head=nxt;
    }
    return pre;
}
int main()
{
    //making a linked list and sending its head to isPallindrome funtion
}