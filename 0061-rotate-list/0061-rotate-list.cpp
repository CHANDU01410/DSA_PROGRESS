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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL||head->next==NULL||k==0) return head;
        ListNode*tail=head;
        int len=1;
        while(tail->next!=NULL){
            tail=tail->next;
            len++;
        }
    
    k=k%len;
    if(k==0) return head;
tail->next=head;
ListNode* newLastNode=nthNode(tail,len-k);
head=newLastNode->next;
newLastNode->next=NULL;
return head;
    }
   ListNode* nthNode(ListNode*temp,int k){
    int cnt=1;
    while(temp!=NULL){
        temp=temp->next;
        if(cnt==k) return temp;
        cnt++;
    }
    return temp;
    }
};