#include<iostream>
#include"stack_globals.h"
using namespace std;

void create_stack(Stack *ps)
{
    ps->top = nullptr;
    ps->size = 0 ;
}

void push(StackEntry e , Stack *ps)
{
    StackNode *pn;

    pn = (StackNode*)malloc(sizeof(StackNode));
    if(pn)
    {
        pn->entry = e;
        pn->next = ps->top;
        ps->top = pn;
        ps->size++;
    }
    else
        cout<<"\nFull Memory Can not push \n";
}
void pop(StackEntry *pe , Stack *ps)
{
    *pe = ps->top->entry;

    StackNode *temp = ps->top;
    ps->top = ps->top->next;
    delete(temp);
    ps->size--;
}
void traverse(Stack *ps)
{
    StackNode *temp;
    temp = ps->top;
    while(temp){
        cout<<temp->entry.data;
        temp = temp->next;
    }
}
void clear_stack(Stack *ps)
{
    StackNode *temp1 , *temp2;
    temp1 = ps->top;
    temp2 = ps->top;
    while(temp1){

        temp2 = temp2->next;
        delete(temp1);
        temp1 = temp2;
    }
    ps->top = nullptr;
    ps->size = 0;
}
int stack_size(Stack *ps)
{
    return ps->size;
}


