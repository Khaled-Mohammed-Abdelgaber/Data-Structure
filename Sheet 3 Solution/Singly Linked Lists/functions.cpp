#include"Global.h"
#include<iostream>
using namespace std;

void creat_list(List *pl){
    pl->head = NULL;
    pl->size = 0;
}
bool list_empty(List *pl)
{
    return (pl->size == 0);
}
bool list_full(List *pl)
{
    return 0;
}
int list_size(List *pl)
{
    return pl->size;
}
void destroy_list(List *pl)
{
    ListNode *q;
    while(pl->head != NULL)
    {
        q = pl->head->next;
        free(pl->head);
        pl->head = q;
    }
    pl->size = 0;
}
void traverse_list(List *pl)
{   ListNode *temp_pointer = pl->head;

    while(temp_pointer->next != NULL )
    {
        cout<<temp_pointer->e.data<<endl;
        temp_pointer = temp_pointer->next;
    }
    cout<<temp_pointer->e.data<<endl;
}

int insert_list(int pos , ListEntry e , List *pl)
{
    ListNode *p , *q;
    int i ;//will act as a counter
    //allocate memory location equal to listnode which will be inserted
    if(p = (ListNode *)malloc(sizeof(ListNode)))//check that memory not filled
    {


    //initialize values of new allocated values with values function input
    p->e = e;
    p->next = NULL;
    //now we need to shift all the list values and check some special cases
    //first case if we want to insert at first element
    if(pos == 0)
    {
        p->next = pl->head;// make p point to the first thing on which list head points to
        pl->head = p;//now make head of list is p
    }
    else
    {   //loop until you reach the pos-1
        for(q = pl->head , i = 0 ; i<pos-1 ; i++)
        {
            q = q->next;
        }
        //now hold pos-1 by pointer
        //q->next points to the pos-1 location in list
        p->next = q->next; // now p point to the position pos-1 where we want to insert
        q->next = p;

    }

  pl->size++;
  return 1;
}
else
    return 0;
}
void delet_element(int pos ,ListEntry *pe ,List *pl)
{ //delete element from list and return it in pe pointer
    int i ;
    ListNode *q , *temp;
    if(pos == 0)
    {   *pe = pl->head->e; // now pe has the value of entry that will be deleted
        temp = pl->head->next; // temp point to the next element of list [the reminder of list]
        delete(pl->head);// free node at which list head point to
        pl->head = temp;//now the head is the next element

    }
    else
    {
        for(q = pl->head , i = 0 ; i< pos - 1; i++)//iterate until we reach the pos-1 [before deletion by one]
            q = q->next ;
        *pe = q->next->e ;//hold the value of pos
         temp = q->next->next;//hold the remaining part of the list after pos
         delete(q->next);
         q->next = temp;
    }
    pl->size--;
}
void retrieve_element(int pos , ListEntry *pe , List *pl)
{
    int i ;
    ListNode *q;
    q = pl->head;
    for(i = 0 ; i < pos ;i++ )
            q = q->next;
    *pe = q->e;

}
void replace_element(int pos , ListEntry e , List *pl)
{
    int i ;
    ListNode *q;
    q = pl->head;
    for(i = 0 ; i < pos ;i++ )
            q = q->next;
     q->e = e;
}

void revers_order(List *pl)
{
   ListNode *prev = NULL , *next = NULL ;
   ListNode *current = pl->head;
   while(current != NULL)
   {
       next = current->next;
       current->next = prev;
       prev = current;
       current = next;
   }
   pl->head = prev;

}









