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
   
    ListNode* mergeKLists(vector<ListNode*>& lists) {

        while(lists.size()>1){
            vector<ListNode*> temp;
            for(int i = 0; i < lists.size(); i+=2){
                ListNode* list1 = lists[i];
                ListNode* list2 = (i+1 < lists.size())? lists[i+1]: nullptr;
                temp.push_back(mergeTwoLists(list1, list2));
            }
            lists = temp;
        }

        return (lists.size())? lists[0]: nullptr;
    }
	
 ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head = new ListNode();
        ListNode* headPtr = head;

        while(list1 != nullptr && list2 != nullptr){
            if(list1->val <= list2->val){
                head->next = list1;
                list1 = list1->next;
            } else {
                head->next = list2;
                list2 = list2->next;
            }
            head = head->next;
        }

        if(list1 == nullptr) head->next = list2;
        else if(list2 == nullptr) head->next = list1;

        return headPtr->next;
    }

};