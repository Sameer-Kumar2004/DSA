// have to find peak element in an array where peak element is greater than its neighbours

#include <stdio.h>

int peak_element(int arr[], int n) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
            return mid; //peak element found at index mid
        }else if (arr[mid]<arr[mid-1]){
                high=mid-1; //search in left subarray
        }else{
            low=mid+1; //search in right subarray
}

    return -1;
}
}

int main() {
    int arr[] = {1, 3, 20, 4, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    int index = peak_element(arr, n);

    if (index != -1) {
        printf("Peak element index: %d, value: %d\n", index, arr[index]);
    } else {
        printf("No peak element found\n");
    }

    return 0;
}