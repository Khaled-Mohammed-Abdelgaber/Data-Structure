#include <iostream>
#include"Global.h"
using namespace std;


int main()
{ int insert_status;
 List *pl;
 ListNode n ;
 ListEntry e ;
 e.data = 55;
 cout<<e.data;
 creat_list(pl);
 cout<<endl<<"Creating list done\n";
 insert_status =  insert_list(0 , e , pl);
 cout<<insert_status<<endl;
 e.data = 60;
 traverse_list(pl);
 insert_status = insert_list(1,e,pl);
 e.data = 70;
 insert_status = insert_list(1,e,pl);

 e.data = 8;
 insert_status = insert_list(3,e,pl);
cout<<"________________usual order_____________________\n";
 traverse_list(pl);
 ListEntry *pe = &e;
 delet_element(2 ,pe ,pl);
 cout<<"________________after deleltion order_____________________\n";
 cout<<"Deleted element is : "<<pe->data<<endl;
 traverse_list(pl);
 cout<<"________________retrieving_____________________\n";
 retrieve_element(0, pe , pl);
 cout<<"Element at index 0 is : "<<pe->data<<endl;
 cout<<"________________reverse order_____________________\n";
traverse_list(pl);
 revers_order(pl);
 cout<<"reversing done\n";
 traverse_list(pl);

    return 0;
}
