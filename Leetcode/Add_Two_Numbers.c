/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {

    if(l1==NULL||l2==NULL)
    return (l1==NULL)?l2:l1;

    int c=0,sum=0;
    struct ListNode *res= (struct ListNode*)malloc(sizeof(struct ListNode));
    res->next=NULL;
    res->val=-1;
    struct ListNode* f=(struct ListNode*)malloc(sizeof(struct ListNode));
    f=res;
    while(l1!=NULL||l2!=NULL||c)
    {
        struct ListNode *temp = (struct ListNode*)malloc(sizeof(struct ListNode));
        temp->val=0;
        sum = (l1?l1->val:0)+(l2?l2->val:0)+c;
        c = sum>=10?1:0;
        sum = (sum>=10?sum%10:sum);
        temp->val=sum;
        temp->next=NULL;
        if(res->val<0){res->val=sum;}else {res->next=temp;res=res->next;}
        l1=l1?l1->next:NULL;
        l2=l2?l2->next:NULL;
    }
    return f;
}
