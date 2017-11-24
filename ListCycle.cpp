/*
 ==============================================================================================================================
 Name        : main.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright © InterviewBit for the question.
 Copyright   : Copyright ©  Siddhata Patil. Sourcecode rights reserved.
 Question    : Given a linked list, return the node where the cycle begins. If there is no cycle, return null.
 Example     : Return the node corresponding to node 3. if looped to 3
 ==============================================================================================================================
 */

#include <iostream>
#include <vector>
#include <stack>
using namespace std;

struct ListNode
{
  int val;
  ListNode *next;
 ListNode(int x) : val(x), next(NULL) {}
  };

  ListNode* get_new(ListNode* head, int new_data)
  {
  	head=NULL;
  	ListNode* link;
  	link->val=new_data;
  	link->next=head;
  	cout<< "Data: " <<link->val<< endl;
  	head = link;
  	return link;
  }

  void print1(ListNode* s)
  {
    while(s!=NULL)
  {
    cout<<s->val<<endl;
  	s=s->next;
  }
  }

class Solution
{
public:
 ListNode* detectCycle(ListNode* A);
}obj;

ListNode * start_node(ListNode * node , ListNode *A){
    ListNode * B = node;
    ListNode * C = node;
    int j = 1;
    while(B->next != C){
        j++;
        B = B->next;
    }
    B = A;
    C = A;
    for(int i = 0 ; i < j ; ++i){
        C = C->next;
    }
    while(C!=B){
        C = C->next;
        B = B->next;
    }
    return C;
}

ListNode* Solution::detectCycle(ListNode* A)
{
    ListNode * B = A;
    ListNode * C = A;
    while(B && C && C->next)
    {
        B = B->next;
        C = C->next->next;
        if(B == C)
            return start_node(B , A);
    }
    return NULL;
}

int main()
{
  ListNode* p;
  ListNode* p1;
  ListNode* p2;
  p1=get_new(p,1);
	p1=get_new(p,2);
	p1=get_new(p,3);
	p1=get_new(p,4);
	p1=get_new(p,5);
  //print1(p1);
  p2=obj.detectCycle(p1);
  print1(p2);
  return 0;
}
