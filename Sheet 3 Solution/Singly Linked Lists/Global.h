#ifndef GLOBAL_H_INCLUDED
#define GLOBAL_H_INCLUDED
const int MAX_SIZE = 10;
struct ListEntry{
  int data;

};
struct ListNode{
    ListEntry e;
    ListNode *next;
};

struct List{
   ListNode *head;
   int size ;
};
void creat_list(List *pl);
bool list_empty(List *pl);
bool list_full(List *pl);
int list_size(List *pl);
void destroy_list(List *pl);
void traverse_list(List *pl);
int insert_list(int pos , ListEntry e , List *pl);
void delet_element(int pos ,ListEntry *pe ,List *pl);
void retrieve_element(int pos , ListEntry *pe , List *pl);
void replace_element(int pos , ListEntry e , List *pl);
void revers_order(List *pl);
#endif // GLOBAL_H_INCLUDED
