#include <iostream>
#include"Global.h"
using namespace std;


int main()
{ int insert_status;
 List *pl;
 ListNode n ;
 ListEntry e ;
 e.data = 55;
 creat_list(pl);

 insert_status =  insert_list(0 , e , pl);
 e.data = 60;
 insert_status = insert_list(1,e,pl);
 e.data = 70;
 insert_status = insert_list(1,e,pl);

 e.data = 8;
 insert_status = insert_list(3,e,pl);
cout<<"________________usual order_____________________\n";
 traverse_list(pl);
 revers_order(pl);
 cout<<"________________reverse order_____________________\n";
 traverse_list(pl);
    return 0;
}
