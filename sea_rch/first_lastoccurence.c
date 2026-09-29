#include <stdio.h>

int first_occur(int arr[], int n, int key) {
    int low = 0, high = n - 1;
    int res = -1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key) {
            res = mid;
            high = mid - 1;       // search left
        }
        else if (arr[mid] < key) {
            low = mid + 1;        // search right
        }
        else {
            high = mid - 1;       // search left
        }
    }

    return res;
}

int last_occur(int arr[], int n, int key) {
    int low = 0, high = n - 1;
    int res = -1;  

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key) {
            res = mid;
            low = mid + 1;        // search right
        }
        else if (arr[mid] < key) {
            low = mid + 1;        // search right
        }
        else {
            high = mid - 1;       // search left
        }
    }

    return res;
}

int main() {

    int arr[] = {0,1,2,2,2,2,3,4,5,6,6,7};

    int n = sizeof(arr) / sizeof(arr[0]);

    int key = 2;

    int first = first_occur(arr, n, key);
    int last = last_occur(arr, n, key);

    printf("First occurrence = %d\n", first);
    printf("Last occurrence = %d\n", last);

    return 0;
}