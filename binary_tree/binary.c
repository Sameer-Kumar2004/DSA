// binary search is divide and conquer algo to find the position of target value in array.
// divide array in two sub-arrays (left and right subpart) and check recursively if the element is in right or left side sub-array.
// NOTE:- binary search work for sorted array only.



// USING FOR LOOP: 
#include <stdio.h>
int binarySearch(int arr[], int target, int low, int high) {
    if (low > high) {
        return -1; // Element not found
    }

    int mid = low + (high - low) / 2;

    if (arr[mid] == target) {
        return mid; // Element found at index mid
    } else if (arr[mid] > target) {
        return binarySearch(arr, target, low, mid - 1); // Search in left subarray
    } else {
        return binarySearch(arr, target, mid + 1, high); // Search in right subarray
    }
}

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 45, 56, 67, 78, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 23;

    int result = binarySearch(arr, target, 0, n - 1);

    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found\n");
    }

    return 0;
}


// USING WHILE LOOP:
#include <stdio.h>
int binary_search(int arr[],int low,int high,int key){
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==key){
            return mid;
        }else if(arr[mid]>key){
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return -1;
}
int main(){
    int arr[]={2,9,10,19,18,17,16};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key=10;

    int res=binary_search(arr,0,n-1,key);
    if (res!=-1){
        printf("Element found at index %d\n",res);
    }
    else{
        printf("Element not found\n");
    }
    return 0;
}







// find the first and last ocurrence of an element in a sorted array

// #include <stdio.h>
// int first_occur(int arr[],int n,int key){
//     int low=0,high=n-1;
//     int res=-1;

//     while(low<=high){
//         int mid=low+(high-low)/2;
//         if(arr[mid]==key){
//             res=mid;
//             high=mid-1; // search in left subarray for first occurrence
//         }
//         else if (arr[mid]<key){
//             high=mid+1;
//         }
//         else {
//             low=mid-1;
//         }
//     }
//     return res;
// }

// int last_occur(int arr[],int n,int key){
//     int low=0, high=n-1;
//     int res=-1;
//     while(low<=high){
//         int mid=low+(high-low)/2;
        
//         if (arr[mid]==key){
//             return mid;
//             low=mid+1;  //search in right  subarray for last occurrence
//         }else if (arr[mid]<key){
//             low=mid+1;
//         } else {
//             high=mid-1;
//         }
//     }
//     return res;
    
// }
// int main(){
//     int arr[]={1,0,2,3,4,5,6,2,2,2,7,2,6};
//     int n=sizeof(arr)/sizeof(arr[0]);

//     int key=2;
//     int first=first_occur(arr,n,key);
//     int last=last_occur(arr,n,key);

//     printf("first and last occurrence is %d %d ",first,last);
//     return 0;
// }

#include <stdio.h>

int  main(){
    printf("hello world");
    return 0;
}
