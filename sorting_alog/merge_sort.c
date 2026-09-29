#include <stdio.h>  // Declares printf before it is used
#include <stdlib.h>

// merge sort follow  --> divide and conquer mechanism

void merge(int arr[],int left,int mid,int right){
    int i=left;
    int j=mid+1;
    int k=0;

    int temp[right-left+1]; // It calculates how many elements are in the portion of the array that we're currently


    //compare element from both half
    while (i<=mid && j<=right){
        if(arr[i]<=arr[j]){
            temp[k]=arr[i];
            i++;
        }
        else{
            temp[k]=arr[j];
            j++;
        }
        k++;
    }
        // copy rem left elemnet
        while(i<=mid){
            temp[k]=arr[i];
            i++;
            k++;
        }
        //copy rem right element
        while(j<=right){
            temp[k]=arr[j];
            j++;
            k++;
        }

        // copy sorted element in original array
        for(i=left,k=0;i<=right;i++,k++){
            arr[i]=temp[k];
        }
    }

void merge_sort(int arr[],int left,int right){
    if(left<right){
        int mid=left+(right-left)/2;

        //divide
        merge_sort(arr,left,mid);
        merge_sort(arr,mid+1,right);

        //merge
        merge(arr,left,mid,right);
    }
}



int main(){
    int arr[]={38,27,43,3,9,82,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("before merge sort:\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    merge_sort(arr,0,n-1);

    printf("\nafter merge sort:\n");
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
    
    return 0;

}