#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void swap(char** xp, char** yp);
void printStringArray(char* arr[], int size);
void selectionSort(char* arr[], int n);

int main()
{
    char* arr[] = {"Cherry", "AppleBee", "Pineapple", "Apple", "Orange"};
    int n = sizeof(arr)/sizeof(arr[0]);

    

    printStringArray(arr, n);

    selectionSort(arr, n);

    printStringArray(arr, n);

    return 0;    
    
}

void printStringArray(char* arr[], int size){
    for (int i = 0; i < size; i++) {
        puts(arr[i]);
    }
}

void selectionSort(char* arr[], int n){
    int minIndex = 0;    
    for (int i=0; i < n-1; i++) {
        minIndex = i;        
        for (int j=i+1; j<n; j++) {            
            if (strcmp(arr[minIndex], arr[j]) > 0){
                minIndex = j;
            }
        }
        char* temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] =  temp;
        //swap(&arr[i], &arr[minIndex]);
    }
}

void swap(char** xp, char** yp){
    char *temp = *xp;
    *xp = *yp;
    *yp = temp;
}

