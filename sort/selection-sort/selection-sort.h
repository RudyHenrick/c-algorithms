/*
Program Name: selection_sort.c
Author: Rodolfo H. Ferreira
Email: rodolfohenrick@gmail.com

Description: Selection sort is a simple sorting algorithm with time complexity of O(n^2).
*/

void sel_sort(int arr[], int n){
    int swap;

    for(int i = 0; i < n-1; i++){
        int minIndex = i;

        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }

        if(minIndex != i){
            swap = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = swap;
        }
    }
}
