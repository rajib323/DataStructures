#include <stdio.h>
int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
        return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
}
 
int main(void)
{
    int c, first, last, middle, n, search, arr[100];

    printf("\n\nEnter number of elements : ");
    scanf("%d", &n);

    printf("\n\nEnter %d integers : ", n);

    for (c = 0; c < n; c++)
        scanf("%d", &arr[c]);

    printf("\n\nEnter value to find : ");
    scanf("%d", &search);

    first = 0;
    last = n - 1;
    middle = (first+last)/2;
    int result = binarySearch(arr, 0, n - 1, search);
    (result == -1)
        ? printf("\n\nElement is not present in array")
        : printf("\n\nElement is present at index %d", result+1);
    return 0;
}