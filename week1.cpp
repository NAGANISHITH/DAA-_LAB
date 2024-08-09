#include <stdio.h>
void sort_packages(int times[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (times[j] > times[j + 1]) {
                temp = times[j];
                times[j] = times[j + 1];
                times[j + 1] = temp;
            }
        }
    }
}
void sortDescending(int arr[], int n) {
    int temp;
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int n, i,num;
    printf("Enter the order 1]ass,2]dec : ");
    scanf("%d", &num);
    //printf("Enter the number of packages: ");
    //scanf("%d", &n);
    int times[ ];
    printf("Enter time to reach destination: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &times[i]);
    }
    if (num==1){
	
    sort_packages(times, n);
    printf("Sorted packages: ");
    for (i = 0; i < n; i++) {
        printf("%d ", times[i]);
    }
    printf("\n");
    }
    
    
    
    
    
    
 if (num==2){
    sortDescending(times, n);
    for (int i = 0; i < n; i++) 
	{
        printf("%d ", times[i]);
    }
    printf("\n");
    return 0;
}
}



