#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void swap(int* xp, int* yp);
void printArray(int arr[], int size);
void selectionSort(int arr[], int n);

int main()
{
    int arr[] = {64,25,12,22,11};
    int n = sizeof(arr)/sizeof(int);

    selectionSort(arr,n);

    printArray(arr, n);

    return 0;

}


void selectionSort(int arr[], int n) {
    int minIndex;
    for (int i=0; i < n-1; i++){
        minIndex = i;
        for (int j=i+1; j<n; j++){
            if (arr[minIndex] > arr[j] ) {
                minIndex = j;
            }

        }
        swap(&arr[i], &arr[minIndex]);
    }   

}

void swap(int* xp, int* yp){
    int temp =  *xp;
    *xp = *yp;    
    *yp = temp;
}

void printArray(int arr[], int size){
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

}
/*
int main()
{
    int arr[] = {64,25,12,22,11};
    int temp=0;
    for (int i=0; i<sizeof(arr)/sizeof(int);i++)
        printf("%d ", arr[i]);
    printf("\n");
    for (int i=0; i<sizeof(arr)/sizeof(int)-1;i++){
        int lowestNo = arr[i];
        int lowestInx = i;
        for (int j=i+1; j<sizeof(arr)/sizeof(int); j++){
            if(lowestNo > arr[j]){
                lowestNo = arr[j];
                lowestInx = j;                
               }
        }
        temp = arr[i];
        arr[i] = arr[lowestInx];
        arr[lowestInx] = temp; 
     
    }
    
    for (int i=0; i<sizeof(arr)/sizeof(int);i++)
        printf("%d ", arr[i]);
    
    return 0;
}

*/

