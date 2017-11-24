/*
 ==============================================================================================================================
 Name        : main.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright © InterviewBit for the question.
 Copyright   : Copyright ©  Siddhata Patil. Sourcecode rights reserved.
 Question    : Reverse linked list II
 Example     : Given 1->2->3->4->5->NULL, m = 2 and n = 4, return 1->4->3->2->5->NULL.
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

class Solution
{
public:
 ListNode* reverseBetween(ListNode* A, int m, int n);
}obj;

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

ListNode* Solution::reverseBetween(ListNode* A, int m, int n)
{
   ListNode* next_link;
   ListNode* current_value;
   ListNode* prev_value;
   ListNode * start;
   ListNode *sprevious;
        current_value= A;
        prev_value=NULL;
        sprevious=NULL;
        int current=1;
        while(current<m){
            sprevious=current_value;
            current_value=current_value->next;
            start= current_value;
            current++;
        }
        current++;
        prev_value=current_value;
        start=current_value;
        current_value=current_value->next;
        while(current<=n){
            next_link=current_value->next;
            current_value->next=prev_value;
            prev_value=current_value;
            current_value=next_link;
            current++;
        }
        if(sprevious==NULL){
            A=prev_value;
        }
        else{
            sprevious->next=prev_value;
        }
        start->next=current_value;

    return A;
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
  p2=obj.reverseBetween(p1, 1, 1);
  //print1(p2);
  return 0;
}
