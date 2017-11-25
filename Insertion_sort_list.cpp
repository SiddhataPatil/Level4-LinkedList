/*
 ==============================================================================================================================
 Name        : main.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright © InterviewBit for the question.
 Copyright   : Copyright ©  Siddhata Patil. Sourcecode rights reserved.
 Question    : Sort a linked list using insertion sort
 Example     : Input : 3, 1, 2 o/p: 1, 2, 3
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
 ListNode* insertionSortList(ListNode* A);
}obj;

ListNode* Solution::insertionSortList(ListNode* A)
{
    if (A == NULL || A->next == NULL)
    {
        return A;
    }

    ListNode *sort = NULL;
    ListNode *link = A;

    while (link)
    {
        ListNode *current = link;
        link = link->next;

        if (sort == NULL || sort->val > current->val)
        {
            current->next = sort;
            sort = current;
        }
        else
        {
            ListNode *temp = sort;

            while (temp)
            {
                ListNode *insert = temp;
                temp = temp->next;

                if (insert->next == NULL || insert->next->val > current->val)
                {
                    insert->next = current;
                    current->next = temp;
                    break;
                }
            }
        }
    }
    return sort;
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
  print1(p1);
  p2=obj.insertionSortList(p1);
  print1(p2);
  return 0;
}
