#include <stdio.h>
void sort_packages(int times[], int n) 
{
int i, j, temp;
for (i = 0; i < n - 1; i++) 
{
for (j = 0; j < n - i - 1; j++) 
{
if (times[j] > times[j + 1]) 
{
temp = times[j];
times[j] = times[j + 1];
times[j + 1] = temp;
}
}
}
}
void sortDescendingOrder(int arr[], int n) {
int temp;
for (int ii = 0; ii < n-1; ii++) {
for (int jj = ii+1; jj < n; jj++) {
if (arr[ii] < arr[jj]) {
temp = arr[ii];
arr[ii] = arr[jj];
arr[jj]= temp;
}
}
}
}

int main() {
int n, i,num;
printf("Enter the order 1]ass,2]dec : ");
scanf("%d", &num);
printf("Enter the number of packages: ");
scanf("%d", &n);
int times[n];
printf("Enter time to reach destination: ");
for (i = 0; i < n; i++) 
{
scanf("%d", &times[i]);
}
if (num==1){
sort_packages(times, n);
printf("Sorted packages: ");
for (i = 0; i < n; i++) 
{
printf("%d ", times[i]);
}
printf("\n");
}  
if (num==2)
{
sortDescendingOrder(times, n);
for (int iii = 0; iii < n; iii++) 
{
printf("%d ", times[iii]);
}
printf("\n");
return 0;
}
}

