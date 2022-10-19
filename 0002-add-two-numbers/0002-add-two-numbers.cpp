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
ListNode* ans=NULL;
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2,int carry=0) {
if(l1==NULL && l2==NULL)
{
if(carry)
{
ListNode *temp=new ListNode( carry , NULL);
ans=temp;
}
return ans;
}
if(l1 && l2)
{
ListNode *temp=new ListNode( ((l1->val) + (l2->val) + carry)%10 , NULL);
if((l1->val) + (l2->val) +carry>=10)
carry=1;
else
carry=0;
temp->next=addTwoNumbers(l1->next,l2->next,carry);
ans=temp;
}
else
{
if(!l1)
{
ListNode *temp=new ListNode((l2->val+carry)%10 , NULL);
if(l2->val+carry>=10)
carry=1;
else carry=0;
temp->next=addTwoNumbers(l1,l2->next,carry);
ans=temp;
}
else
{
ListNode *temp=new ListNode((l1->val+carry)%10 , NULL);
if(l1->val+carry>=10)
carry=1;
else carry=0;
temp->next=addTwoNumbers(l1->next,l2,carry);
ans=temp;
}
}
return ans;
}
};
//