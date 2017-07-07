/*
    Usage example of sel_sort defined in selection-sort.h header. 
*/

#include <stdio.h>
#include "selection-sort.h"

#define ARR_LEN 10

int main(void){
    int arr[ARR_LEN] = {4,2,6,3,1,0,5,7,9,8};

    printf("Unsorted Array: {");

    for(int i = 0; i < ARR_LEN; i++){
        if(i == ARR_LEN - 1){
            printf("%i", arr[i]);
        }
        else{
            printf("%i, ", arr[i]);
        }
    }

    printf("}\n");

    sel_sort(arr, ARR_LEN);

    printf("Sorted Array: {");

    for(int i = 0; i < ARR_LEN; i++){
        if(i == ARR_LEN - 1){
            printf("%i", arr[i]);
        }
        else{
            printf("%i, ", arr[i]);
        }
    }

    printf("}\n");
}
