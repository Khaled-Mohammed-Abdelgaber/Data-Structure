#ifndef STACK_GLOBALS_H_INCLUDED
#define STACK_GLOBALS_H_INCLUDED

struct StackEntry{
    int data ;
};

struct StackNode{
   StackEntry entry;
   StackNode *next;
};

struct Stack
{
    StackNode *top ;
    int size ;
};
void create_stack(Stack *ps);//to create the stack
void push(StackEntry e , Stack *ps);//for pushing (insertion)
void pop(StackEntry *pe , Stack *ps);//to retrieve an element
void traverse(Stack *ps);//to display all element of stack
void clear_stack(Stack *ps);//to delete all elements of stack
int stack_size(Stack *ps);
#endif // STACK_GLOBALS_H_INCLUDED
