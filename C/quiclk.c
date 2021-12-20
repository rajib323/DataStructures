#include <stdio.h>
void swap(int *a, int *b) {
 int t = *a;
 *a = *b;
 *b = t;
}
int partition(int array[], int low, int high) {
 int pivot = array[high];
 int i = (low - 1),j;
 for (j = low; j < high; j++) {
 if (array[j] <= pivot) {
 i++;
swap(&array[i], &array[j]);
 }
 }
 swap(&array[i + 1], &array[high]);
 return (i + 1);
} 
void quickSort(int array[], int low, int high) {
 if (low < high) {
 int pi = partition(array, low, high);
 quickSort(array, low, pi - 1);
 quickSort(array, pi + 1, high);
 }
}
int main()
{
 int n, i;
 printf(" Enter number of elements : ");
scanf("%d", &n);
 int *a;
a= (int*) malloc(n * sizeof(int));
 printf(" Enter elements : ");
for (i = 0; i < n; i++)
 scanf("%d", &a[i]);
 quickSort(a,0,n-1);
 printf("\n Sorted Array: ");
 for(i = 0; i < n; i++)
 printf("%d ", a[i]);
 return 0;
} 
