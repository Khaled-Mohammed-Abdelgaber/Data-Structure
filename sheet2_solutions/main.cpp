#include <iostream>
#include"functions.h"
using namespace std;
int main()
{
    int arr[6] = {1,3,4,4,7,0};

    //cout<<"max number in the array is : "<<get_max_num(arr , 5)<<endl;
    //int arr_size = deleteMaxNum(arr, 5);
    //array_sorter(arr, 5);
    int arr_size = remove_dupes( arr, 6);
    display(arr , arr_size);



    return 0;
}
