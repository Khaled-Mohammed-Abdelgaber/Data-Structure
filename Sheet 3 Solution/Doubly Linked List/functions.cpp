#include<iostream>
#include"Global.h"
using namespace std;
void creat_list(List *pl)
{
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
{
    ListNode *temp_pointer = pl->head;

    while(temp_pointer->next != NULL )
    {
        cout<<temp_pointer->e.data<<endl;
        temp_pointer = temp_pointer->next;
    }
    cout<<temp_pointer->e.data<<endl;
}
int insert_list(int pos , ListEntry e , List *pl)
{
    ListNode *q , *p;
    //q = pl->head;
    if(p = (ListNode *)malloc(sizeof(ListNode)))
    {
       p->e = e;
       p->next = NULL ;
       p->prev = NULL;
       if(pos == 0)
       {
           p->next = pl->head;
           pl->head = p;
       }

       else
       {
           for(int i = 0 ; i<pos-1 ; i++)
            {
                q = q->next;
            }
        p->next = q->next;
        q->next = p;

        p->prev = q;
        if(p->next != NULL)
            p->next->prev = p;

       }
        pl->size++;
        return 1;
    }

   else
    return 0;

}
void delet_element(int pos ,ListEntry *pe ,List *pl)
{
    ListNode *temp , *q ;


    if(pos == 0)
        {
        *pe = pl->head->e;
        cout<<(pe->data);
        temp = pl->head->next;
        delete(pl->head);
        pl->head = temp;
        pl->head->prev = NULL;
        }
    else
    {
     q = pl->head;
     for(int i = 0  ; i<pos ; i++){
        q = q->next;
     }
    *pe = q->e;

     q->prev->next = q->next;
     q->next->prev = q->prev->next;
    delete(q);
    }

   pl->size--;
}
void retrieve_element(int pos , ListEntry *pe , List *pl)
{
    ListNode *q = pl->head;
    for(int i = 0 ; i<pos ; i++)
    {
        q = q->next;
    }
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
   if (pl->head == nullptr || pl->head->next == nullptr) {
    cout<<"No thing To do\n";
  }

  ListNode* current = pl->head;
  ListNode* previous = nullptr;
  ListNode* next;
  while (current != nullptr) {
     next = current->next;

    // Swap the prev and next pointers
    current->next = previous;
    current->prev = next;

    previous = current;
    current = next;
  }

  // Set the new head pointer
  pl->head = previous;
}






