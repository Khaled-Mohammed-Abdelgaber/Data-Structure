#include<iostream>
using namespace std;
// this function will take an array and return max value of it
//Question 1 solution
int get_max_num(int arr[],int arr_size){
    int largest = arr[0];
    for(int i = 1 ; i<arr_size ; i++)
    {
        if(arr[i]>largest)
            largest = arr[i];
    }

    return largest;
}
//==========================================================
//this function will delete value from given array
int delete_value(int arr[] , int arr_size,int pos){
int new_size = arr_size - 1;
for(int i = pos ; i<new_size ;i++ )
{
    arr[i] = arr[i+1];
}
return new_size;
}
//-----------------------------------------------
//this function will find position of a value
int index_finder(int arr[] ,int arr_size ,int value)
{
    for(int i = 0 ; i<arr_size;i++){
        if(arr[i] == value)
            return i;
    }
}
//-------------------------------------------------------------------
//this function will return max value and delete it from the array
//Q2 solution
int deleteMaxNum(int arr[] , int arr_size){
    int largest = get_max_num(arr, arr_size);
    int largest_index = index_finder( arr , arr_size ,largest);
    int new_size = delete_value(arr , arr_size, largest_index);
    return new_size;
}
//===================================================================
void display(int arr[] , int arr_size){
 for(int i = 0 ; i<arr_size ; i++)
    cout<<"arr["<<i<<"] = "<<arr[i]<<endl;
}
//=====================================================================
//Q3 solution

//this function will sort array
void array_sorter(int arr[] , int arr_size)
{
    int temp_arr_size = arr_size ;
    int temp_arr1[arr_size];
    int temp_arr2[arr_size];

    for(int i = 0 ; i<arr_size;i++)
        temp_arr1[i] = arr[i];

    for(int i = 0 ; i<arr_size ; i++){
      temp_arr2[i] = get_max_num(temp_arr1,temp_arr_size);
      temp_arr_size = deleteMaxNum(temp_arr1 , temp_arr_size);
    }

    for(int i = 0 ; i<arr_size;i++)
        arr[i] = temp_arr2[i];
}
//====================================================
//Q4 solution
int remove_dupes(int arr[] , int arr_size){

for(int i = 0 ; i<arr_size ; i++){
    for(int j = i+1 ; j<arr_size;j++){
        if(arr[i] == arr[j])
            arr_size = delete_value(arr , arr_size, j);
    }
}
return arr_size;
}


